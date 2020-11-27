#include <iostream>
using namespace std;
// 1, 5, 10, 20, 100.
int main(int argc, char const *argv[])
{
    int n, m = 0;
    cin >> n;
    while (n > 0)
    {
        if (n % 5 == 0 || n % 10 == 0 || 125 % 20 == 0)
        {
            m++;
            n = n/5;
        }
    }

    cout << m;

    return 0;
}
