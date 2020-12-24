#include <bits/stdc++.h>
using namespace std;
bool ispalen(int num)
{
    int n, digit, rev = 0;
    n = num;
    do
    {
        digit = num % 10;
        rev = (rev * 10) + digit;
        num = num / 10;
    } while (num != 0);
    if (n == rev)
        return true;
    else
        return false;
}
bool isprime(int n)
{
    int i;
    if (n == 0 || n == 1)
    {
        return false;
    }
    else
    {
        for (i = 2; i <= n / 2; ++i)
        {
            if (n % i == 0)
            {
                return false;
                break;
            }
        }
    }
    return true;
}
void solve()
{
    int no;

    cin >> no;
    if (ispalen(no)==true && isprime(no)==true)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
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