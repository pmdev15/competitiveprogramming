// #include <bits/stdc++.h>
// using namespace std;

// #define ios                  \
//     ios::sync_with_stdio(0); \
//     cin.tie(0);
// #define ll long long
// #define endl "\n"

// // bool prime[1000000 + 1];
// int count_prime[1000000 + 1];

// void primenumbers()
// {
//     int n = 1000000;
//     bool prime[n + 1];
//     for (int p = 2; p * p <= n; p++)
//     {
//         if (prime[p] == false)
//         {
//             for (int i = p * p; i <= n; i += p)
//             {
//                 prime[i] = true;
//             }
//         }
//     }
//     int count = 0;
//     for (int i = 2; i <= n; i++)
//     {
//         if (prime[i])
//             count++;
//         count_prime[i] = count;
//     }
// }
// int main()
// {
//     ios int t = 1, c = 0;
//     cin >> t;
//     while (t--)
//     {
//         int x, y;
//         cin >> x >> y;
//         c = 0;
//         if (y == 1)
//         {
//             if (x > 2)
//                 cout << "Divyam" << endl;
//             else
//                 cout << "Chef" << endl;
//         }
//         else
//         {
//             if (c == 0)
//             {
//                 primenumbers();
//             }
//             if (count_prime[x] > y)
//                 cout << "Divyam" << endl;
//             else
//                 cout << "Chef" << endl;
//         }
//     }
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

#define ios                  \
    ios::sync_with_stdio(0); \
    cin.tie(0);
#define ll long long
#define endl "\n"

bool isprime(int n)
{
    for (ll a = 2; a * a <= n; a++)
    {
        if (n % a == 0)
            return false;
    }
    return true;
}
// void solve()
// {
// }
int main()
{
    ios int t = 1, abc = 1;
    cin >> t;
    int p[1000001];
    p[0] = 0;
    p[1] = 0;
    int count = 0;
    for (int i = 2; i < 1000001; i++)
    {
        if (isprime(i))
            count++;
        p[i] = count;
    }
    while (t--)
    {
        ll x, y;
        cin >> x >> y;
        if (p[x] > y)
            cout << "Divyam" << endl;
        else
            cout << "Chef" << endl;
    }
    return 0;
}