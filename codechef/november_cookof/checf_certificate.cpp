#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int stu, min, lec, ans = 0;
    cin >> stu >> min >> lec;
    for (int i = 0; i < stu; i++)
    {
        int inmin = 0, totmin = 0;
        for (int j = 0; j < lec; j++)
        {
            cin >> inmin;
            totmin += inmin;
        }
        int ques = 0;
        cin >> ques;
        if (ques <= 10 && totmin >= min)
        {
            ans++;
        }
    }
    cout << ans << endl;
}
int main()
{
    solve();
    return 0;
}