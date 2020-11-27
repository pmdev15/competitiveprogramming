#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, minv = 10000000;
        cin >> n;
        int s[n];
        for (int i = 0; i < n; i++)
        {
            cin >> s[i];
        }

        // for (int i = 0; i < n; i++)
        // {
        //     for (int j = 0; j < n; j++)
        //     {
        //         if (s[i] - s[j] <= min && s[i] - s[j] > 0)
        //         {
        //             min = (s[i] - s[j]);
        //         }
        //     }
        // }
        
        sort(s, s + n);

        for (int i = 0; i < n - 1; i++)
        {
            minv = min(minv, (s[i + 1] - s[i]));
        }
        cout << minv << endl;
    }

    return 0;
}
