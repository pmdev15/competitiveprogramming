#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve()
{
    int arr1[3];
    int arr2[3];
    int arr3[3];
    for (int i = 0; i < 3; i++)
    {
        cin >> arr1[i];
    }
    for (int i = 0; i < 3; i++)
    {
        cin >> arr2[i];
    }
    for (int i = 0; i < 3; i++)
    {
        cin >> arr3[i];
    }
    if (arr1[0] == arr2[0] && arr1[1] == arr2[1] && arr1[2] == arr2[2])
    {
        cout << "no" << endl;
    }
    else if (arr2[0] == arr3[0] && arr2[1] == arr3[1] && arr2[2] == arr3[2])
    {
        cout << "no" << endl;
    }
    else if (arr1[0] == arr3[0] && arr1[1] == arr3[1] && arr1[2] == arr3[2])
    {
        cout << "no" << endl;
    }
    else
    {
        cout << "yes" << endl;
    }
}
int main()
{
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}