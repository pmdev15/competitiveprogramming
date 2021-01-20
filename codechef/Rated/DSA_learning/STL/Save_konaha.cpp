#include <bits/stdc++.h>
using namespace std;

// void solve()
// {
//     long long n, z;
//     scanf("%lld %lld", &n, &z);
//     int arr[n];
//     long long int sum = 0;
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d", &arr[i]);
//         sum += arr[i];
//     }
//     if (sum < z)
//     {
//         printf("Evacuate");
//     }
//     else
//     {
//         long long int ans = 0, max = 0;
//         int in;
//         while (z > 0)
//         {
//             for (int j = 0; j < n; j++)
//             {
//                 if (arr[j] > max)
//                 {
//                     max = arr[j];
//                     in = j;
//                 }
//             }
//             z -= max;
//             arr[in] = arr[in] / 2;
//             ans++;
//         }
//         printf("%lld", ans);
//     }
// }
void compute()
{
    int n, z, d = 10000, c = 0, b, a[10001]{0};
    cin >> n >> z;
    while (n--)
    {
        cin >> b;
        ++a[b];
    }
    while (z > 0 && d > 0)
    {
        if (a[d] > 0)
        {
            z -= d;
            --a[d];
            ++a[d / 2];
            ++c;
        }
        else
            --d;
    }
    if (z > 0)
        cout << "Evacuate\n";
    else
        cout << c << '\n';
}
int main()
{
    int t = 1;
    scanf("%d", &t);
    while (t--)
    {
        // solve();
        compute();
    }
    return 0;
}