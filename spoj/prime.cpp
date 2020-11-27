#include <bits/stdc++.h>
using namespace std;

#define forp(i, a, b) for (int i = a; i < b; i++)
#define print(x) printf("%d", x)
#define read(x) scanf("%d", &x)

bool isprime(int n)
{
    int i, flag = 0;
    for (i = 2; i <= sqrt(n); ++i)
    {
        if (n % i == 0)
        {
            flag = 1;
            break;
        }
    }
    if (flag == 0)
        return true;
    else
        return false;
}
void solve()
{
    int n, k;
    cin >> n >> k;
    for (int i = n; i <= k; i++)
    {
        // int j;
        // for (j = 2; j < i; j++)
        // {
        //     if (i % j == 0)
        //     {
        //         break;
        //     }
        // }
        // if (i == j)
        // {
        //     cout << j << endl;
        // }
        if (isprime(i)==true && i!=1)
        {
            cout<<i<<endl;
        }
        
    }
}
int main()
{
    int t;
    read(t);
    while (t--)
    {
        solve();
    }

    return 0;
}