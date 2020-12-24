#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>

using namespace std;
namespace tshoot
{
    void __print(int x) {cerr << x;}
    void __print(long x) {cerr << x;}
    void __print(long long x) {cerr << x;}
    void __print(unsigned x) {cerr << x;}
    void __print(unsigned long x) {cerr << x;}
    void __print(unsigned long long x) {cerr << x;}
    void __print(float x) {cerr << x;}
    void __print(double x) {cerr << x;}
    void __print(long double x) {cerr << x;}
    void __print(char x) {cerr << '\'' << x << '\'';}
    void __print(const char *x) {cerr << '\"' << x << '\"';}
    void __print(const string &x) {cerr << '\"' << x << '\"';}
    void __print(bool x) {cerr << (x ? "true" : "false");}
    template<typename T, typename V>
    void __print(const pair<T, V> &x) {cerr << '{'; __print(x.first); cerr << ','; __print(x.second); cerr << '}';}
    template<typename T>
    void __print(const T &x) {int f = 0; cerr << '{'; for (auto &i: x) cerr << (f++ ? "," : ""), __print(i); cerr << "}";}
    void _print() {cerr << "]\n";}
    template <typename T, typename... V>
    void _print(T t, V... v) {__print(t); if (sizeof...(v)) cerr << ", "; _print(v...);}

#ifndef ONLINE_JUDGE
    #define debug(x...) cerr << "[" << #x << "] = ["; _print(x);//cout<<"___"<<endl;
    #else
    #define debug(x...)
#endif
}
using namespace tshoot;
using namespace __gnu_pbds;
using namespace std::chrono;


typedef tree<int,null_type,less<int>,rb_tree_tag,
tree_order_statistics_node_update> indexed_set;

typedef long long int ll;
#define ios ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define endl "\n" 
#define mod 1000000007


const ll mxN=5e5+5;
bool test_cases_exist=true;


void solve()
{
    ll i,j,n,m,pos,k,y,x,weigh,ans,sum,maxi,mini;
    
    cin>>x>>y>>n;
    
    bool flag=false;
    if(x==y)
    {
        cout<<0<<endl;
        return;
    }

    if(x>y)
        swap(x,y),flag=true;

    for(i=31;i>=0;i--)
        if(((x>>i)&1)^((y>>i)&1))
            break;
    
    if(i==-1)
    {
        cout<<0<<endl;
        return;
    }
    
    i=(1ll<<i);
    k=n/i;
    if(k&1)
    {
        ans=i*(k/2+1);
    }
    else  
    {
        ans=i*(k/2);
        ans+=(n%i)+1;
    }

    if(flag)
        ans=n+1-ans;
    
    cout<<ans<<endl;

}   


int main()
{
    ios;
#ifndef ONLINE_JUDGE
    freopen("inp.txt", "r", stdin);
    freopen("out.txt", "w", stdout);  
    freopen("deb.txt", "w", stderr);
    auto begin = std::chrono::high_resolution_clock::now(); 
#endif


////////////////////////////////////////
    ll t=1;
    if(test_cases_exist)
        cin>>t;   
    while(t--)
        solve();    
////////////////////////////////////////   


#ifndef ONLINE_JUDGE
    auto end = std::chrono::high_resolution_clock::now();
    cerr << setprecision(4) << fixed;
    cerr << "Execution time: " << std::chrono::duration_cast<std::chrono::duration<double>>(end - begin).count() << " seconds" << endl;
#endif 
}     