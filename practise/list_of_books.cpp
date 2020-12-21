#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long long int no_of;
    cin >> no_of;
    vector<int> arr;
    for (int i = 0; i < no_of; i++)
    {
        int a;
        cin>>a;
        arr.push_back(a);
    }
    int book_taken=1, index=1;
    cin >> book_taken;

    for (int j = 1; j <= book_taken; j++)
    {
        cin >> index;
        cout << arr[index-1]<<endl;
        arr.erase(arr.begin()+(index-1));
    }
}
int main()
{
    int t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}