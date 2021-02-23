#include <bits/stdc++.h>
using namespace std;

#define ios                  \
    ios::sync_with_stdio(0); \
    cin.tie(0);
#define ll long long
#define endl "\n"

int getindex(vector<int> v, int k)
{
    auto it = find(v.begin(), v.end(), k);
    if (it != v.end())
    {
        int index = it - v.begin();
        return index;
    }
    else
    {
        return -1;
    }
}

void solve()
{
    int n;
    cin >> n;
    vector<int> w;
    vector<int> l;
    vector<int> pos(n);
    vector<int> b(n);

    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        w.push_back(a);
        pos.push_back(i);
        b[i] = w[i];
    }
    sort(b.begin(), b.end());
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        l.push_back(a);
    }
    int count = 0;
    for (int j = 1; j < n; j++)
    {
        int index = getindex(w, b[j]);
        int p = pos[getindex(w, b[j - 1])];
        int c = index;
        while (c <= p)
        {
            c += l[index];
            pos[index] = c;
            count++;
        }
    }
    cout << count << endl;
}
int main()
{
    ios int t = 1, abc = 1;
    cin >> t;
    while (t--)
    {
        // cout << "Case #" << abc << ": ";
        solve();
        ++abc;
    }
    return 0;
}