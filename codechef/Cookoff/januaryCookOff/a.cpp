#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"

bool isupperc(string s)
{
	for (int i = 0; i < s.length(); i++)
	{
		if (isupper(s[i]))
		{
			return true;
			break;
		}
	}
	return false;
}

bool islowerc(string s)
{
	for (int i = 0; i < s.length(); i++)
	{
		if (islower(s[i]))
		{
			return true;
			break;
		}
	}
	return false;
}
bool isdigitn(string s)
{
	bool flag = false;
	for (int i = 0; i < s.length(); i++)
	{
		if (isdigit(s[i]))
		{
			flag = true;
			break;
		}
	}
	if (s[0] < 65 || s[0] > 122 || s[s.length()] < 65 || s[s.length()] > 122)
	{
		flag = false;
	}
	return flag;
}

bool isspechar(string s)
{
	bool flag = false;
	for (int i = 0; i < s.length(); i++)
	{
		if (s[i] == '@' || s[i] == '#' || s[i] == '%' || s[i] == '&' || s[i] == '?')
		{
			flag = true;
			break;
		}
	}
	if (s[0] < 65 || s[0] > 122 || s[s.length()] < 65 || s[s.length()] > 122)
	{
		flag = false;
	}
	return flag;
}
void solve()
{
	string s;
	cin >> s;
	bool flag = true, Upper = false, digit = false, spechar = false;
	int n = s.length();
	if (s.length() < 10)
		cout << "NO" << endl;

	else
	{
		// if ((s[0] < 97 || s[0] > 122) || (s[n] < 97 || s[n] > 122))
		// {
		// 	flag = false;
		// }
		// else if ()
		// {
		// 	cout << "NO" << endl;
		// }
		// if (islower(s[0]) && islower(s[n]))
		// {
		// 	flag = true;
		// }
		if (isupperc(s) && isdigitn(s) && isspechar(s))
		{
			cout << "YES" << endl;
		}
		else
		{
			cout << "NO" << endl;
		}
	}
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int t = 1, abc = 1;
	cin >> t;
	while (t--)
	{
		// cout << "Case #" << abc << ": ";
		solve();
		++abc;
	}
	return 0;
}