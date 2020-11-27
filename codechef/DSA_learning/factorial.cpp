#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int t;cin>>t;
    while (t--)
    {
        long long int n,sum=0;
        cin >> n;
        while(n>0)
        {
           n /= 5;
           sum += n;
        }
        cout<<sum<<endl;
    }

    return 0;
}
