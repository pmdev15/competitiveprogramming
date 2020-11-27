#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int t=1;
    // cin >> t;
    while (t--)
    {
        int k, ans = 0;
        cin >> k;

        for (int i = 1; i <= k; i++)
        {
            for (int j = i; j <= k; j++)
            {
                if (j%i==0 && j!=i)
                {
                    ans++;
                }
            }
        }
        cout << ans+k << endl;
    }
    

    return 0;
}
