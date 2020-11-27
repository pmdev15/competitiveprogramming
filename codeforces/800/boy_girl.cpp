#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    set<char> a(s.begin(), s.end());
    if (a.size() & 1)
        cout << "IGNORE HIM!\n";
    else
        cout << "CHAT WITH HER!\n";
}
// my code:-
// #include<iostream>
// using namespace std;

// int main(int argc, char const *argv[])
// {
//     string n;
//     cin>>n;

//     if (n.size()%2==0)
//     {
//         cout<<"CHAT WITH HER!";
//     }else
//     {
//         cout<<"IGNORE HIM!";
//     }

//     return 0;
// }
