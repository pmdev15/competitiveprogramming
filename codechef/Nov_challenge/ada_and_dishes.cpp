#include <iostream>
using namespace std;

void solve()
{

    short int n, a = 0;
    cin >> n;
    int arr[n];
    bool flag = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int j = 0; j < n; j++)
    {
        if (arr[j] == arr[j + 1])
        {
            flag = 1;
        }
    }

    if (flag == 1)
    {
        a = (arr[0] * n) - arr[0];
        cout << a;
        
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            a += arr[i];
        }
        a = a/2;
        cout << a;
    }
    
    cout << "\n";
}

int main(int argc, char const *argv[])
{
    short int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    

    return 0;
}
