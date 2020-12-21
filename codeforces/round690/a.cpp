#include <bits/stdc++.h>
using namespace std;
void printarr(int arr[], int n)
{
    for (int abc = 0; abc < n; abc++)
    {
        cout << arr[abc] << " ";
    }
    // cout << endl;
}
// vector<int> vec;
// vector<int> ans;
void solve()
{
    int n;
    cin >> n;
    int vec[n] = {0};
    int ans1[n] = {0};
    int ans2[n] = {0};
    for (int i = 0; i < n; i++)
    {
        long long int a;
        cin >> a;
        vec[i] = a;
    }
    for (int j = 0; j < n; j++)
    {
        if (j % 2 == 0)
        {
            ans1[j] = vec[j];
        }
    }
    for (int k = 0; k < n; k++)
    {
        if (k % 2 != 0)
        {
            ans2[k] = vec[k];
        }
    }
    
    for (int ab = 0; ab < n/2; ab+=2)
    {
        cout<<ans1[ab]<<" ";
    }
    for (int ac = 1; ac < n/2; ac+=2)
    {
        cout<<ans1[ac]<<" ";
    }
    cout<<endl;
}
int32_t main()
{
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}