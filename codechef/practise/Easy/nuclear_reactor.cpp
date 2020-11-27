#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int abomb, chamb, npart;
    cin >> abomb >> npart >> chamb;
    npart++;
    for (int i = 0; i < chamb; i++)
    {
        cout << abomb % npart << " ";
        abomb = abomb / npart;
    }

    return 0;
}
