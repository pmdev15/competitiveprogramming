#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    if (n==1)
    {
        cout<<"I hate it";
    }else
    {
        for (int i = 0; i < n; i++)
        {
            if (n%2==0)
            {
                cout<<"I love that";
            }else
            {
                cout<<"i hate it";
            }
            
            
        }
        
    }
    
    

    
return 0;
}
