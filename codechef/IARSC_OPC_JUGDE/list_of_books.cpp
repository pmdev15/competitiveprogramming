#include <bits/stdc++.h>
#include <vector>
using namespace std;

vector<int> vi;
void solve()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        vi.push_back(a);
    }
    int m;
    cin >> m;
    for (int j = 0; j < m; j++)
    {
        int inp;
        cin >> inp;
        cout << vi[inp - 1] << endl;
        vector<int>::iterator it = vi.begin();
        vi.erase(it + inp);
    }
}
int main()
{
    int t = 1;
    while (t--)
    {
        solve();
    }
}