#include <bits/stdc++.h>
using namespace std;

#define print(x) printf("%d", x)
#define write(x) cout << x
#define read(x) scanf("%d", &x)

void solve(int n)
{
    int inp1, inp2, lead1 = 0, lead2 = 0, mxply = 0, mxlead = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> inp1 >> inp2;
        lead1 += inp1;
        lead2 += inp2;
        if (mxlead < abs(lead1 - lead2))
        {
            mxlead = abs(lead1 - lead2);
            mxply = lead1 > lead2 ? 1 : 2;
        }
    }
    write(mxply << " " << mxlead<<"\n");
}
int main()
{
    int n;
    read(n);
    solve(n);
    return 0;
}