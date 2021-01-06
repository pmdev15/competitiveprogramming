#include <bits/stdc++.h>
using namespace std;

#define deb(x) cout << #x << "=" << x << endl
#define deb2(x, y) cout << #x << "=" << x << " " << #y << "=" << y << endl
#define ll long long
#define vi vector<int>
#define si set<int>
#define print(x) printf("%d", x)
#define scan(x) cout << x
#define read(x) scanf("%d", &x)
#define ff first
#define ss second
#define pb push_back
#define mp make_pair
#define mod 1000000007

// void solve()
// {
//     ll n;
//     cin >> n;
//     vector<ll> arr;
//     for (ll i = 0; i < n; i++)
//     {
//         ll a;
//         cin >> a;
//         arr.pb(a);
//     }
//     ll a = 0, b = 0;
//     for (ll i = 0; i < n; i++)
//     {
//         for (ll j = 0; j < arr.size(); j++)
//         {
//             if (arr[j] % 2 == 0 || arr[j] == 1)
//             {
//                 a += arr[j];
//                 arr.erase(arr.begin() + j);
//             }
//         }
//         for (ll k = 0; k < arr.size(); k++)
//         {
//             if (arr[k] % 2 != 0 || arr[k] == 1)
//             {
//                 b += arr[k];
//                 arr.erase(arr.begin() + k);
//             }
//         }
//     }
//     if (a > b)
//     {
//         cout << "Alice\n";
//     }
//     else if (b > a)
//     {
//         cout << "Bob\n";
//     }
//     else
//     {
//         cout << "Tie\n";
//     }
// }

void solve()
{
    int n;
    cin >> n;
    ll arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    sort(arr, arr + n, greater<int>());
    ll a = 0, b = 0;
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0 && arr[i] % 2 == 0)
            a += arr[i];
        if (i % 2 == 1 && arr[i] % 2 == 1)
            b += arr[i];
    }
    if (a == b)
        cout << "Tie\n";
    else if (a > b)
        cout << "Alice\n";
    else
        cout << "Bob\n";
}

int main()
{
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}