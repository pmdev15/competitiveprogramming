#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, ans = 0;
        cin >> n;
        while (n > 0)
        {
            m = n % 10;
            ans = ans + m;
            n = n / 10;
        }
        cout << ans<<endl;
    }

    return 0;
}
