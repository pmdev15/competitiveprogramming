#include <iostream>
#define lli long long int
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        lli k;
        int d0, d1;
        cin >> k >> d0 >> d1;
        lli temp = d0 + d1;
        lli ans = temp;
        lli sum = (2 * temp) % 10 + (4 * temp) % 10 + (8 * temp) % 10 + (6 * temp) % 10;
        k = k - 2;
        if (k > 0)
        {
            ans += (temp % 10);
            k--;
        }
        ans += (k / 4) * sum;
        k %= 4;
        int p = 2;
        while (k--)
        {
            ans += (p * temp) % 10;
            p = (p * 2) % 10;
        }
        if ((ans % 3) == 0)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}