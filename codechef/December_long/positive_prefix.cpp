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
    bool flag = true;
    if (k == 0)
        flag = false;
    if (n % 2 != 0 && k != 0 && k != n)
    {
        for (int i = 0; i < n; i++)
        {
            if ((i + 1) % 2 == 0)
            {
                arr[i] = -(i + 1);
            }
            else
            {
                arr[i] = i + 1;
            }
        }
    }
    else if (n % 2 == 0 && k != 0 && k != n)
    {
        for (int i = 0; i < n; i++)
        {
            if (i % 2 == 0)
            {
                arr[i] = -(i + 1);
            }
            else
            {
                arr[i] = i + 1;
            }
        }
    }
    if (k == n)
    {
        for (int i = 0; i < n; i++)
        {
            arr[i] = i + 1;
        }
    }
    if (flag)
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
            arr1[i] = i + 1;
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
        compute();
    }
    return 0;
}
