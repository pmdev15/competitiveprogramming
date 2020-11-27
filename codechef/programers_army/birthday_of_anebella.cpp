#include <bits/stdc++.h>
using namespace std;

#define forp(i, a, b) for (int i = a; i < b; i++)
#define ll long long
#define print(x) printf("%d", x)
#define read(x) scanf("%d", &x)
#define mod 1000000007

void solve()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    bool flag = false;
    for (int j = 0; j < n; j++)
    {

        for (int k = j + 1; k < n; k++)
        {
            if ((arr[j] + arr[k]) == 2000)
            {
                flag = true;
                break;
            }
        }
    }
    if (flag==true)
    {
        cout << "Accepted";
    }
    else
    {
        cout << "Rejected";
    }
}
int main()
{
    int t;
    read(t);
    while (t--)
    {
        solve();
    }
    return 0;
}