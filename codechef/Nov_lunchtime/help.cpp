#include<bits/stdc++.h>
#define boost ios::sync_with_stdio(false); cin.tie(0)
#define ll              long long int
#define f               first
#define s               second
using namespace std;

const int MAX = 1e6 + 5;
bool prime[MAX];
int spf[MAX];

void sieve() {
    fill(prime, prime + MAX, true);
    for (int i = 1; i < MAX; i++)spf[i] = i;
    prime[0] = prime[1] = false;
    for (int i = 2; i * i < MAX; i++) {
        if (prime[i]) {
            for (int j = i * i; j < MAX; j += i) {
                if (prime[j]) spf[j] = i;
                prime[j] = false;
            }
        }
    }
}

//Multiple Query
void divisors(vector<ll>& divs, int x) {
    map<int, int> mp;
    while (x != 1) {
        mp[spf[x]]++;
        x = x / spf[x];
    }
    divs.clear();
    divs.push_back(1);
    for (auto p : mp) {
        int sz = divs.size();
        for (int q = 0; q < sz * p.s; q++)
            divs.push_back(divs[q] * p.f);
    }
    sort(divs.begin() , divs.end());
}

int main()
{
    boost;
    sieve();
    ll n, ans = 0;
    cin >> n;
    vector<ll> curr {1}, next{1, 2};
    for (int i = 1; i < n; i++) {
        if (i > 1) {
            swap(curr, next);
            divisors(next, i + 1);
        }
        ll r = next.size();
        for (int l = 0; l < curr.size(); l++) {
            while (r > 0 and (i + curr[l] * next[r - 1]) > n) r--;
            ans += r;
        }
    }
    cout << ans;
    return 0;
}