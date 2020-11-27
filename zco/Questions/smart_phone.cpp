#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    long long int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    sort(arr, arr + n);

    long long int maxr = 0;

    for (int j = 0; j < n; j++)
    {
        maxr = max(maxr, arr[j] * (n - j));
    }

    cout << maxr << endl;

    return 0;
}
    