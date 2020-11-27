#include <bits/stdc++.h>
using namespace std;

#define print(x) printf("%d", x)
#define write(x) cout << x
#define read(x) scanf("%d", &x)

void solve(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        read(arr[i]);
    }
    int count = 0;
    for (int j = 0; j < n; j++)
    {
        for (int k = j; k < n; k++)
        {
            int maxr = max(arr[j], arr[k]);
            cout << "maxr=" << maxr << "count=" << count << endl;
            cout << "arr[j]=" << arr[j] << "arr[k]" << arr[k] << "xor" << (arr[j] ^ arr[k]) << endl;
            if ((arr[j] ^ arr[k] > maxr))
            {
                maxr = (arr[j] ^ arr[k]);
                count++;
            }
        }
    }
    cout << count << endl;
}
int main()
{
    int t;
    read(t);
    while (t--)
    {
        int n;
        read(n);
        int arr[n];
        solve(arr, n);
    }

    return 0;
}