#include <bits/stdc++.h>
using namespace std;

#define forp(i, a, b) for (int i = a; i < b; i++)
#define ll long long
#define print(x) printf("%d", x)
#define read(x) scanf("%d", &x)
#define mod 1000000007
vector<int> v;
vector<int> w;
void solve()
{
    int n;
    for (int i = 0; i < 6; i++)
    {
        cin>>n;
        v.push_back(n);
    }
    for (int j = 0; j < 7; j++)
    {
        cin>>n;
        w.push_back(n);
    }
    sort(v.begin(),v.end());
    sort(w.begin(),w.end());
    for (int k = 0; k < 6; k++)
    {
        cout<<v[k]<<" ";
    }
    cout<<endl;
    for (int l = 0; l < 7; l++)
    {
        cout<<w[l]<<" ";
    }
    
    
}
int main()
{
    int t=1;
    // cin >> t;
    while(t--)
    {
        solve();
    }
}