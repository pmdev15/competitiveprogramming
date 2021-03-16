#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;

    if (n % 2 == 0)
    {
        if (n <= 2)
        {
            cout << "No" << endl;
        }
        else
        {
            cout << "yes" << endl;
        }
    }
    else
    {
        cout << "No" << endl;
    }

    return 0;
}
