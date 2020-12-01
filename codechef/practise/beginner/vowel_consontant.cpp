#include <bits/stdc++.h>
using namespace std;

void solve()
{
    char c;
    cin >> c;
    if (isupper(c))
    {
        if (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
        {
            cout << "Vowel" << endl;
        }
        else
        {
            cout << "Consonant" << endl;
        }
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