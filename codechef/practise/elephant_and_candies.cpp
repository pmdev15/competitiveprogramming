#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n,m;
    cin>>n>>m;
    int sum=0;
    for (int i = 0; i < n; i++)
    {
        int a;cin>>a;
        sum += a;
    }
    if(m>=sum){
        cout<<"Yes"<<endl;
    }
    else
    {
        cout<<"No"<<endl;
    }
    
    
}
int main()
{
    int t=1;
    cin >> t;
    while(t--)
    {
        solve();
    }
}