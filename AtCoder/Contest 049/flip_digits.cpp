#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int n, cont = 0, m = 2;
    cin >> n;
    string s, t;
    bool flag = false;
    cin >> s >> t;

    for (int i = 0; i < n; i++)
    {
        if (s[i] != t[i])
        {
            s[i] = t[i];
            cont++;
            flag = true;
        }
    }

    if (flag)
    {
        cout << cont << endl;
    }
    else
    {
        cout << -1 << endl;
    }

    return 0;
}
