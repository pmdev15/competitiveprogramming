#include <bits/stdc++.h>
using namespace std;

#define ll long long
int n, x;
int main()
{
    int t = 1;
    // cin >> t;
    while (t--)
    {
        cin >> n;
        long long sum = 0;
        vector<int> v1, v2;
        for (int i = 0; i < n; i++)
        {
            cin >> x;
            sum += x;
            if (x > 0)
                v1.push_back(x);
            else
                v2.push_back(-x);
        }
        if (sum < 0)
        {
            cout << "second";
            return 0;
        }
        else if (sum > 0)
        {
            cout << "first";
            return 0;
        }
        if (v1 > v2)
        {
            cout << "first";
            return 0;
        }
        else if (v2 > v1)
        {
            cout << "second";
            return 0;
        }
        if (x < 0)
        {
            cout << "second";
        }
        else
        {
            cout << "first";
        }
    }
    return 0;
}