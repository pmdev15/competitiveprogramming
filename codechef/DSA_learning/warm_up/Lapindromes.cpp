#include <bits/stdc++.h>
using namespace std;

const int MAX_CHAR = 26;
bool checkCorrectOrNot(string s)
{
    int check[27] = {0};
    int i=0, j = s.length()-1;
    while(i < j){
        check[s[i++] -'a']++;
        check[s[j--] -'a']--;
    }
    for (int i=0; i<27; ++i){
        if (check[i] < 0){
            return false;
        }
    }
    return true;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        string s;
        cin >> s;
        if (checkCorrectOrNot(s))
            cout << "Yes\n";
        else
            cout << "No\n";
    }
    return 0;
}
