
#include <bits/stdc++.h>
using namespace std;

#define forp(i,a,b) for (int i = a; i < b; i++)
#define form(a, b) for (int i = a; i >= b; i--)
#define REP(i, n) forp(i, 0, n)
#define ld long double
#define int long long
#define ll long long
#define st string
#define mii make<int, int>
#define pii pair<int, int>
#define vi vector<int>
#define print(x) printf("%d", x)
#define write(x) cout << x
#define read(x) scanf("%d", &x)
#define all(x) x.begin(), x.end()
#define sortall(x) sort(all(x))
#define ff first
#define ss second
#define pb push_back
#define mp make_pair
#define mod 1000000007
#define PI 3.1415926535897932384626
#define VAR(i, n) __typeof(n) i = (n)
#define FOREACH(i, c) for (VAR(i, (c).begin()); i != (c).end(); i++)
#define FORDEACH(i, c) for (VAR(i, (c).rbegin()), i != (c).rend(); i++)
const int INF = 1000000009;
const long long INFLL = (ll)INF * (ll)INF;
const ld EPS = 10e-9;

void solve()
{
	int n,k;
	cin>>n>>k;
	forp(i,1,n+1){
		if(i<=k){
			cout<<i<<" ";
		}
		else
		{
			cout<<-i<<" ";
		}
	}
	cout<<endl;
}

int32_t main(int32_t argc, char const *argv[])
{
	int t=1;
	cin>>t;
	while(t--){
	solve();
	}
	return 0;
}
