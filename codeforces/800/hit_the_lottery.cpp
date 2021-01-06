#include <iostream>
using namespace std;
// 1, 5, 10, 20, 100.
int main(int argc, char const *argv[])
{
    int n, m = 0;
    cin >> n;
    while (n > 0)
    {
        if (n >= 100)
        {
            m++;
            n -= 100;
        }
        else if (n >= 20)
        {
            m++;
            n -= 20;
        }
        else if (n >= 10)
        {
            m++;
            n -= 10;
        }
        else if (n >= 5)
        {
            m++;
            n -= 5;
        }
        else
        {
            m++;
            n--;
        }
    }

    cout << m;

    return 0;
}
