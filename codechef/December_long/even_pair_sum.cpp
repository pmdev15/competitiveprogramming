#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int a, b;
    cin >> a >> b;
    int aodd, aeven, bodd, beven;
    if (a % 2 == 0 ? aodd = a / 2 : aodd = (a + 1) / 2);
    aeven = a / 2;
    if (b % 2 == 0 ? bodd = b / 2 : bodd = (b + 1) / 2);
    beven = b / 2;
    int eveneven = aeven * beven;
    int oddodd = aodd * bodd;
    int totaleven = eveneven + oddodd;
    cout << totaleven << endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
}
