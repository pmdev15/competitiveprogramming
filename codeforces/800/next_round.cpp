#include <iostream>
using namespace std;

int main()
{
    int n,k,t=0;
    cin>>n>>k;
    for (int i = 0; i < n; i++)
    {
        int p;
        cin>>p;
        if (p>k || p==1)
        {
            t++;
        }else if (p<k)
        if (p=k)
        {
            cout<<p+1<<endl;
            return 0;
        }else
        {
            cout<<p<<endl;
            return 0;
        }
               
    }
    cout<<t<<endl;
    
return 0;
}
