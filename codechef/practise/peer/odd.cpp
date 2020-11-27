#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n,val=1;
    cin>>n;
    while (n!=0)
    {
        n/=2;
        val*=2;
    }
    cout<<val/2<<endl;
    int arr[n]={9,5,2,5,7,4,3,6,7,7};
    sort(arr,arr+n,greater<int>());
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