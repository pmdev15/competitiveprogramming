#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    string n;
    cin>>n;
    ;
    for (int i = 0; i < n.size(); i+=2)
    {
        for (int j = 0; j < i; j++)
        {
            if (n[i]<n[j])
            {
                swap(n[i],n[j]);
            }
        }
         
    }
    
    cout<<n;    

    return 0;
}

