// ll total = 0;

// void coin(int n, int arr[], int req, int sum)
// {
//     if (sum > req)
//         return;
//     if (sum == req)
//     {
//         total++;
//         return;
//     }
//     for (int i = 0; i < n; i++)
//     {
//         coin(n, arr, req, sum + arr[i]);
//     }
// }

// void solve() // recursion approach
// {
//     int n, m;
//     cin >> n >> m;
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     coin(n, arr, m, 0);
//     cout << total % mod;
// }