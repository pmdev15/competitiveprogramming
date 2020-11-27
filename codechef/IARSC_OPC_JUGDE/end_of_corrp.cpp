#include <bits/stdc++.h>
#include<algorithm>
using namespace std;

vector<int> vi;
void solve()
{
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < (n + m); i++)
    {
        int a;
        cin >> a;
        if (a == -1)
        {
            cout << *max_element(vi.begin(),vi.end())<<endl;
            int a = max_element(vi.begin(),vi.end()) - vi.begin();
            vi.erase(vi.begin()+a);
        }
        else
        {
            vi.push_back(a);
        }
    }
}
int main()
{
    int t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
}