#include <iostream>
using namespace std;

int main()
{
    int k, n, w, a;

    cin >> k >> n >> w;
    a = (w * (w + 1) / 2) * k;
    if (a <= n)
    {
        cout << 0;
    }
    else
    {
        cout << a - n;
    }

    return 0;
}
