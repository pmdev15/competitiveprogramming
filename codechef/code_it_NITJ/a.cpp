#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve()
{
    int i, n;
    bool flag = 0;
    cin >> n;

    for (int i = 2; i <= sqrt(n); i++)
    {if (n%i==0){
            flag = 1;
            break;    
        }
    }
    if (flag==0)
        cout << "NO" << endl;
    else
        cout << "YES"<<endl;
}
int main()
{
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}