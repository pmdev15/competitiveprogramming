#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve()
{
	int n, d;
	cin >> n >> d;
	int arr[n];
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
		sum += arr[i];
	}
	if (sum <= n * d ? cout << "Yes\n" : cout << "No\n")
		;
}
int main()
{
	int t = 1;
	cin >> t;
	while (t--)
	{
		solve();
	}
	return 0;
}