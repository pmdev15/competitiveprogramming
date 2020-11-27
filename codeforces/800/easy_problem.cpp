#include <iostream>
using namespace std;

int main()
{
    int n,m;
    cin>>n;

    for (int i = 0; i < n; i++)
    {
        cin>>m;
        if (m==1)
        {
            cout<<"HARD";
            return 0;
        }        
    }
    cout<<"Easy";
    
    return 0;
}
