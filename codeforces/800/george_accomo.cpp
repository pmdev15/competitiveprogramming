#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,a,b,m=0;
    cin>>n;

    for (int i = 0; i < n; i++)
    {
        cin>>a>>b;
        if (a!=b && b-a >= 2)
        {
            m++;
        }
        
    }
    cout<<m;
             
return 0;
}
