#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int n,m,y=0;
    cin>>n>>m;

    while (n<=m)
    {
        n *= 3;
        m *= 2;
        y++;
    }
    cout<<y<<endl;

    return 0;
}
