#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int n,m;
    double t=0.0;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>m;
        t += m;
    }
    
    
    cout<<t/n<<endl;

    return 0;
}
