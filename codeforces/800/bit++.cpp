#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int n,x=0;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin>>s;
        if (s[1]== '+')
        {
            x++;
        }else
        {
            x--;
        }
        
    }
    cout<<x<<endl;

    return 0;
}