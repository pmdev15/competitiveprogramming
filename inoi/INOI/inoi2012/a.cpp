#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"
#define pii pair<int, int>
struct comp
{
	bool operator()(const pii &a, const pii &b)
	{
		return (a.first + max(a.second, b.first + b.second)) < (b.first + max(b.second, a.first + a.second));
	}
};
void solve()
{
	int n, b, c, ans = 0, prefix = 0;
	cin >> n;
	pair<int, int> arr[n];
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i].first >> b >> c;
		arr[i].second = b + c;
	}

	sort(arr, arr + n, comp());

	for (int i = 0; i < n; i++)
	{
		prefix += arr[i].first;
		ans = max(ans, arr[i].second + prefix);
	}

	cout << ans;
}
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int t = 1, abc = 1;
	// cin >> t;
	while (t--)
	{
		// cout << "Case #" << abc << ": ";
		solve();
		++abc;
	}
	return 0;
}