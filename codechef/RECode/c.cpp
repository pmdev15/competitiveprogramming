#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long long int n;
    cin >> n;
    long long int s, ti, tf;
    long long int arr[n]={0};
    // vector<long long int> arr(0);
    for (int i = 0; i < n; i++)
    {
        cin >> s >> ti >> tf;
        for (int j = ti; j < tf; j++)
        {
            if (s > arr[j])
            {
                arr[j]=s;
            }
        }
    }
    int sum = 0;
    for (int k = 0; k < n; k++)
    {
        sum += arr[k];
    }
    cout << sum << endl;
}
int main()
{
    long long int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}