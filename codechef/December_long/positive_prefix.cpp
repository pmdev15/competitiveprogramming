#include <bits/stdc++.h>
using namespace std;

void printarr(int arr[], int n)
{
    for (int abc = 0; abc < n; abc++)
    {
        cout << arr[abc] << " ";
    }
}
void solve()
{
    int n, k;
    cin >> n >> k;
    int arr[n];
    if (k == n || k == 0)
    {
        for (int j = 0; j < n; j++)
        {
            arr[j] = j + 1;
        }
    }
    else
    {

        for (int x = 1; x <= n; x++)
        {
            if (x % 2 != 0)
            {
                arr[x - 1] = x;
            }
            else
            {
                arr[x - 1] = -x;
            }
        }
        int positive;
        if (n % 2 != 0)
            positive = ceil(n / 2);
        else
            positive = ceil((n + 1) / 2);

        if (positive > k)
        {
            int i = n;
            int needed = positive - k;
            while (needed > 0)
            {
                if (arr[i] > 0)
                {
                    arr[i] *= -1;
                    needed--;
                }
                i--;
            }
        }
        if (positive < k)
        {
            int i = n;
            int needed = k - positive;
            while (needed > 0)
            {   
                if (arr[i] < 0)
                {
                    arr[i] *= -1;
                    needed--;
                }
                i--;
            }
        }
    }
    printarr(arr, n);
}

void compute()
{
    int n, k, i = 0, sum = 0;
    cin >> n >> k;
    int arr1[n + 1];
    for (i = 1; i <= n;)
    {
        if (k == 0 || k == n)
            break;
        if (sum + 1 <= i + 1 && k > 0)
        {
            arr1[i] = i;
            sum += i;
            i++;
            k--;
            continue;
        }
        if (sum > i)
        {
            arr1[i] = -i;
            sum -= i;
            i++;
            if (sum > 0)
                k--;
            continue;
        }
        if (sum + 1 > i + 1 && k == 1)
        {
            arr1[i] = -i;
            i++;
            if (sum - i > 0)
            {
                break;
            }
            else
            {
                sum -= i;
                continue;
            }
        }
    }
    if (k == n)
    {
        for (i = 1; i <= n; i++)
        {
            arr1[i] = i;
        }
    }
    else if (i <= n)
    {
        for (i <= n; i++;)
        {
            arr1[i] = -i;
        }
    }
    printarr(arr1, n);
}
int main()
{
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
        // compute();
    }
    return 0;
}
