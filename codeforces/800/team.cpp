#include <iostream>
using namespace std;

int main()
{
    int n, a, b, c = 0;
    cin >> n;
    while (cin >> n >> a >> b)
    {
        if ((n + a + b) > 1)
            c++;
    };
    cout << c;

return 0;
}
