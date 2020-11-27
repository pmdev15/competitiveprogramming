#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m = 0;
        cin >> n;

        if (n % 2 == 0)
        {
            cout << ((n / 2) + 1) << " " << ((n / 2) - 1) << endl;
        }
        else
        {
            cout << (n / 2) << " " << ((n / 2) + 1)<<endl;
        }
    }

    return 0;
}
