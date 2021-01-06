#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, m;
    cin >> n >> m;
    int arra[n];
    int arrb[m];
    long long suma = 0;
    long long sumb = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arra[i];
        suma += arra[i];
    }
    for (int j = 0; j < m; j++)
    {
        cin >> arrb[j];
        sumb += arrb[j];
    }
    if (suma == sumb)
    {
        cout << 0 << endl;
    }
    else
    {
        int count = 0;
        sort(arra, arra + n);
        sort(arrb, arrb + m, greater<int>());
        int l = 0;
        for (int k = 0; k < n; k++)
        {
            suma = suma - arra[k] + arrb[l];
            sumb = sumb - arrb[l] + arra[k];
            swap(arra[k], arrb[l]);
            count++;
            l++;
            if (suma > sumb || l < 0)
            {
                break;
            }
        }
        if (suma > sumb)
        {
            cout << count << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }
}
int sum(int arr[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    return sum;
}
void compute()
{
    int n, m;
    cin >> n >> m;
    int arra[n];
    int arrb[m];
    long long suma = 0;
    long long sumb = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arra[i];
        suma += arra[i];
    }
    for (int j = 0; j < m; j++)
    {
        cin >> arrb[j];
        sumb += arrb[j];
    }
    if (suma == sumb)
    {
        cout << 0 << endl;
    }
    sort(arra, arra + n);
    sort(arrb, arrb + m);
    int j = 0;
    int k = m - 1;
    int count = 0;
    bool flag = false;
    while (sum(arra, n) <= sum(arrb, m))
    {
        swap(arra[j], arrb[k]);
        j++;
        k--;
        count++;
        if (j > m || k < 0)
        {
            flag=true;
            cout << -1 << endl;
            break;
        }
    }
    if (!flag)
    {
        cout << count << endl;
    }
}
int main()
{
    int t = 1;
    cin >> t;
    while (t--)
    {
        // solve();
        compute();
    }
    return 0;
}