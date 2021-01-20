#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string str;
    cin >> str;
    int siz = str.size();
    cout<<siz;
    for (int i = 0; i < siz; i++)
    {
        if (str[i] == 'a' && str[i + 1] == 'b' && str[i + 2] == 'c')
        {
            cout<<str[i]+str[i+1]+str[i+2];
            str.erase(i, i + 3);
        }
    }
    cout << str << endl;
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