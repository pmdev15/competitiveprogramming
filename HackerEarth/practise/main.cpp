#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long int n;
    cin >> n;
    int k;
    cin >> k;
    set<long long> arr;
    for (int i = 0; i < n; i++)
    {
        long long a;
        cin >> a;
        arr.insert(a);
    }
    long long sum = 0;
    set<long long>::iterator it = arr.begin();
    for (; it != arr.end(); it++)
    {
        sum += *it;
    }
    cout << sum << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}