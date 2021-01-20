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
            str.erase(str.begin()+i);
            str.erase((str.begin()+i)+1);
            str.erase((str.begin()+i)+2);
            // str.erase(i+2);
        }
    }
    // str.erase(remove(str.begin(),str.end(), 'abc'),str.end());
    cout << str << endl;
}
int main()
{
    int t=1;
    cin >> t;
    while(t--)
    {
        solve();
    }
    return 0;
}
// #include <iostream>
// #include <algorithm>

// using namespace std;
// main()
// {
//     string my_str;
//     cin>>my_str;
//     cout << "Initial string: " << my_str << endl;
//     my_str.erase(remove(my_str.begin(), my_str.end(), 'a'), my_str.end()); //remove A from string
//     cout << "Final string: " << my_str;
// }