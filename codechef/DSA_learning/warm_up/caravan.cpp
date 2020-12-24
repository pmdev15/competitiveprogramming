#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, nxt, car = 1;
        cin >> n;
        int prev;
        cin >> prev;
        for (int i = 1; i < n; i++)
        {
            cin >> nxt;

            if (nxt < prev)
            {
                car++;
                prev = nxt;
            }
            
        }
        cout << car << endl;
    }
    
    return 0;
}
