#include <bits/stdc++.h>
using namespace std;
#define ll unsigned long long int
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        ll k, q;
        cin >> k >> q;
        vector<ll> a(k, 0), b(k, 0), query(q, 0);
        for (int i = 0; i < k; i++)
        {
            cin >> a[i];
        }
        for (int j = 0; j < k; j++)
        {
            cin >> b[j];
        }
        for (int i = 0; i < q; i++)
        {
            cin >> query[i];
        }
        sort(begin(a), end(a));
        sort(begin(b), end(b));
        vector<ll> c;
        if (k <= 100)
        {
            for (int i = 0; i < k; i++)
            {
                for (int j = 0; j < k; j++)
                {
                    c.emplace_back(a[i] + b[j]);
                }
            }
        }
        else
        {
            ll max = a[100] + b[100];
            for (int i = 0; i < k; i++)
            {
                for (int j = 0; j < k && a[i] + b[j] < max; j++)
                {
                    c.emplace_back(a[i] + b[j]);
                }
            }
        }
        sort(begin(c), end(c));
        for (int i = 0; i < q; i++)
        {
            cout << c[query[i] - 1] << "\n";
        }
    }
    return 0;
}
// #include <bits/stdc++.h>
// using namespace std;
// #define endl "\n"
// void solve()
// {
//     int k, q;
//     scanf("%d %d", &k, &q);
//     long long int motiv[k], satis[k];
//     for (int i = 0; i < k; i++)
//     {
//         scanf("%lld", &motiv[i]);
//     }
//     for (int i = 0; i < k; i++)
//     {
//         scanf("%lld", &satis[i]);
//     }
//     long long arr[k * k], in = 0;
//     for (int i = 0; i < k; i++)
//     {
//         for (int j = 0; j < k; j++)
//         {
//             arr[in] = satis[i] + motiv[j];
//             ++in;
//         }
//     }
//     sort(arr, arr + (k * k));
//     while (q--)
//     {
//         int a;
//         scanf("%d", &a);
//         cout << arr[a - 1] << endl;
//     }
// }
// int main()
// {
//     int t = 1;
//     scanf("%d", &t);
//     while (t--)
//     {
//         solve();
//     }
//     return 0;
// }