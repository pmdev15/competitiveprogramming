#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int t;
    cin >> t;
    while (t--)
    {
        int n,sum=0;
        cin >> n;
        sum=n%10;
        while (n/10!=0)
        {
            n = n / 10;
        }
        cout << sum+n;
    }

    return 0;
}
