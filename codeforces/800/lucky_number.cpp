#include <iostream>
using namespace std;

int main()
{
    char ch;
    int k = 0;
    while (cin >> ch){
        if (ch == '4' || ch == '7')
            k++;}
    if (k == 4 || k == 7)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}
