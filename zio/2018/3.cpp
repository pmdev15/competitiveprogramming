#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int b[n + 1];
    for (int i = 1; i <= n; i++)
    {
        cin >> b[i];
    }
    int cache[n + 1] = {0};
    for (int i = n; i >= 1; i--)
    {
        int zeros = 0, ones = 0;
        for (int j = i; j <= n; j++)
        {
            if (b[j] == 0)
                zeros++;
            else
                ones++;
            if (j == n)
            {
                if (ones >= zeros)
                    cache[i]++;
            }
            else
            {
                if (ones >= zeros)
                {
                    cache[i] += cache[j + 1];
                }
            }
        }
    }
    cout << cache[1] << "\n";
    return 0;
}