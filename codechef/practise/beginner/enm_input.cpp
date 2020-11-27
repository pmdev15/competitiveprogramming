#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int n,k,t=0;
    cin>>n>>k;
    while (n--)
    {
        int a;
        cin>>a;
        if (a%k==0)
        {
            t++;
        }
        
    }
    cout<<t;
    return 0;
}


