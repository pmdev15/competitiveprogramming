#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    char n[100000];
    cin >> n;
    int low = 0;
    int upp = 0;

    for (int i = 0; n[i] != NULL; i++)
    {
        isupper(n[i]) ? upp++ : low++;
    }

    if (upp > low)
    {
        cout << strupr(n);
    }
    else
    {
        cout << strlwr(n);
    }

    return 0;
}
