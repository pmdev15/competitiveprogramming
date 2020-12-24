#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long long car;
    cin>>car;
    bool flag = false;
    int i = 0;
    int sume = 0, sumo = 0;
    while (car > 0)
    {
        if (i % 2 == 0)
        {
            int a = car / 10;
            car /= 10;
            sume += a;
        }
        else
        {
            int a = car / 10;
            car /= 10;
            sumo += a;
        }
    }
    if (sume % 2 == 0 && sume % 4 == 0 || sumo % 2 != 0 && sumo % 3 == 0)
    {
        flag = true;
    }
    // else if ()
    // {
    //     flag = true;
    // }
    if (flag)
    {
        cout<<"Yes ";
    }
    else
    {
        cout<<"No ";
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