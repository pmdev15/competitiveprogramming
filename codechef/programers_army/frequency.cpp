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
    read(n);
    int arr[n];
    bool flag = false;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        for (int j = 0; j < i; j++)
        {
            if (arr[i] == arr[j])
            {
                flag = true;
            }
        }
    }
    if (flag)
    {
        cout << "ne krasivo"<<endl;
    }
    else
    {
        cout << "prekrasnyy"<<endl;
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}