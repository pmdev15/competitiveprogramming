#include<iostream>
#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
	cin>>n;
    vector <string> v;
	string str;
	while(cin >> str){
	    string r = "";
	    for(int i=0; i<str.length(); i++){
            if(str[i]!='\'' && str[i]!= ':' && str[i] != '.' && str[i]!=';' && str[i]!=','){
	            r += str[i];
	        }	        
	    }
	    v.push_back(r);
	}
	reverse(v.begin(), v.end());
	for(int i=0; i<v.size(); i++){
	    cout<<v[i]<<" ";
	}
}
int main()
{
    int t=1;
    while(t--)
    {
        solve();
    }
    return 0;
}