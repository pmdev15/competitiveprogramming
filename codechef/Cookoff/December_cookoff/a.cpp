#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    string str;
    cin >> str;
    int present = 0, absent = 0;
    for (int i = 0; i < n; i++)
    {
        if (str[i] == '1')
        {
            present++;
        }
        else
        {
            absent++;
        }
    }
    if ((120 - absent) >= 80)
    {
        cout<<"Yes"<<endl;
    }
    else
    {
        cout<<"No"<<endl;
    }
    
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