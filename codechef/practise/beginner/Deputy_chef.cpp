#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int T, N;
    cin >> T;
    while (T--)
    {
        cin >> N;
        int attacks[N];
        for (int a = 0; a < N; a++)
        {
            cin >> attacks[a];
        }
        int maxDef = -1;
        for (int d = 0; d < N; d++)
        {
            int di;
            cin >> di;
            if (((d == 0 && di > attacks[N - 1] + attacks[d + 1]) ||
                 (d == N - 1 && di > attacks[d - 1] + attacks[0]) ||
                 (d > 0 && d < N - 1 && di > attacks[d - 1] + attacks[d + 1])) &&
                di > maxDef)
            {
                maxDef = di;
            }
        }
        cout << maxDef << endl;
    }
    return 0;
}