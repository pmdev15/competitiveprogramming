#include <bits/stdc++.h>
#include<algorithm>
using namespace std;

void solve()
{
    int n;cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
        sort(arr,arr+n,greater<int>());
        for (int j = 0; j < i; j++)
        {
            cout<<"arr = "<<arr[j]<<"\n";
        }
        
        auto k = find(arr,arr+n,arr[i]);
        cout<<distance(arr,k)<<endl;
    }
    
}
int main()
{
    solve();
    return 0;
}