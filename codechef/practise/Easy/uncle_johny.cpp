#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        cin >> k;
        k = arr[k - 1];
        sort(arr, arr + n);

        for (int j = 1; j <= n; j++)
        {
            if (arr[j-1] == k)
            {
                cout << j << endl;
            }
        }
    }

    return 0;
}
