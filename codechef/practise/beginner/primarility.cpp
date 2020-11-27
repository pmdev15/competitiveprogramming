#include <iostream>
using namespace std;

bool isprime(int n)
{
    if (n == 1 || n == 0)
        return false;

    for (int i = 2; i * i < n; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}
int main()
{
    int t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;

        if (isprime(n))
            cout << "yes" << endl;
        else
            cout << "no" << endl;
    }

    return 0;
}
