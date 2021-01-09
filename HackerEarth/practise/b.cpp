#include<bits/stdc++.h>
using namespace std;

void solve()
{
	int n;
	cin>>n;
	int sum=0;
	int a;
	for(int i=1;i<=n;i++){
		cin>>a;
		sum+=a;
	}
	for(int i=1;i<=n;i++){
		if(i*n>sum){
			cout<<i<<endl;
			break;
		}
	}
}

int main(){
	int t=1;
	// cin>>t;
	while(t--)
	{
		solve();
	}
	return 0;
}