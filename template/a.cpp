#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>

using namespace std;
namespace tshoot
{
    void __print(int x) { cerr << x; }
    void __print(long x) { cerr << x; }
    void __print(long long x) { cerr << x; }
    void __print(unsigned x) { cerr << x; }
    void __print(unsigned long x) { cerr << x; }
    void __print(unsigned long long x) { cerr << x; }
    void __print(float x) { cerr << x; }
    void __print(double x) { cerr << x; }
    void __print(long double x) { cerr << x; }
    void __print(char x) { cerr << '\'' << x << '\''; }
    void __print(const char *x) { cerr << '\"' << x << '\"'; }
    void __print(const string &x) { cerr << '\"' << x << '\"'; }
    void __print(bool x) { cerr << (x ? "true" : "false"); }
    template <typename T, typename V>
    void __print(const pair<T, V> &x)
    {
        cerr << '{';
        __print(x.first);
        cerr << ',';
        __print(x.second);
        cerr << '}';
    }
    template <typename T>
    void __print(const T &x)
    {
        int f = 0;
        cerr << '{';
        for (auto &i : x)
            cerr << (f++ ? "," : ""), __print(i);
        cerr << "}";
    }
    void _print() { cerr << "]\n"; }
    template <typename T, typename... V>
    void _print(T t, V... v)
    {
        __print(t);
        if (sizeof...(v))
            cerr << ", ";
        _print(v...);
    }

#ifndef ONLINE_JUDGE
#define debug(x...)               \
    cerr << "[" << #x << "] = ["; \
    _print(x); //cout<<"___"<<endl;
#else
#define debug(x...)
#endif
} // namespace tshoot
using namespace tshoot;
using namespace __gnu_pbds;
using namespace std::chrono;

typedef tree<int, null_type, less<int>, rb_tree_tag,
             tree_order_statistics_node_update>
    indexed_set;

typedef long long int ll;
#define ios                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
#define endl "\n"
#define mod 1000000007

const ll mxN = 5e5 + 5;
bool test_cases_exist = true;

void solve()
{
    ll i, j, n, m, pos, k, y, x, weigh, ans, sum, maxi, mini;

    cin >> x >> y >> n;

    bool flag = false;
    if (x == y)
    {
        cout << 0 << endl;
        return;
    }

    if (x > y)
        swap(x, y), flag = true;

    for (i = 31; i >= 0; i--)
        if (((x >> i) & 1) ^ ((y >> i) & 1))
            break;

    if (i == -1)
    {
        cout << 0 << endl;
        return;
    }

    i = (1ll << i);
    k = n / i;
    if (k & 1)
    {
        ans = i * (k / 2 + 1);
    }
    else
    {
        ans = i * (k / 2);
        ans += (n % i) + 1;
    }

    if (flag)
        ans = n + 1 - ans;

    cout << ans << endl;
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
    ll t = 1;
    if (test_cases_exist)
        cin >> t;
    while (t--)
        solve();
        ////////////////////////////////////////

#ifndef ONLINE_JUDGE
    auto end = std::chrono::high_resolution_clock::now();
    cerr << setprecision(4) << fixed;
    cerr << "Execution time: " << std::chrono::duration_cast<std::chrono::duration<double>>(end - begin).count() << " seconds" << endl;
#endif
}

// priority_queue is generally max heap to make it min heap use priority_queue<int,vector<int>,greater<int>> pq;"
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define int long long int
#define double long double
#define get(a, n) for_each(a, a + n, [](int &x) { cin >> x; });
#define getvec(a) for_each(a.begin(), a.end(), [](int &x) { cin >> x; });
#define db(x) cout << "[" << x << "]" << endl;
#define db1(x) cout << "{" << x << "}" << endl;
#define db2(x) cout << "(" << x << ")" << endl;
#define vv vector<int>
#define endl "\n"
#define Endl endl
#define PI acos(-1)
#define pb push_back
#define all(a) a.begin(), a.end()
#define mod 1000000007
#define conv(v, a, n) \
    vector<int> v(n); \
    copy(a, a + n, v.begin());
#define ordered_set tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> //less_equal.
//                                       ^ here if we write less_equal<int> then it is an ordered multiset.
using namespace std;
using namespace __gnu_pbds;
struct str
{
    int size = 0;
    vector<int> v;
    vector<int> pref;
    vector<int> suff;
    vector<int> max_sum;
    void init(int n)
    {
        size = 1;
        while (size < n)
        {
            size = size * 2;
        }
        v.assign(2 * size, 0LL);
        pref.assign(2 * size, 0LL);
        suff.assign(2 * size, 0LL);
        max_sum.assign(2 * size, 0LL);
    }
    void build(vector<int> &a, int x, int lx, int rx)
    {
        if (rx - lx == 1)
        {
            if (lx < a.size())
            {
                v[x] = a[lx];
            }
            return;
        }
        build(a, 2 * x + 1, lx, (lx + rx) / 2);
        build(a, 2 * x + 2, (lx + rx) / 2, rx);
        v[x] = v[2 * x + 1] + v[2 * x + 2];
    }
    void set(int val, int i, int x, int lx, int rx)
    {
        if (rx - lx == 1)
        {
            v[x] = val;

            return;
        }
        if (i < (lx + rx) / 2)
        {
            set(val, i, 2 * x + 1, lx, (lx + rx) / 2);
        }
        else
        {
            set(val, i, 2 * x + 2, (lx + rx) / 2, rx);
        }
        v[x] = v[2 * x + 1] + v[2 * x + 2];
    }
    int sum(int l, int r, int x, int lx, int rx)
    {
        if (lx >= r || l >= rx)
            return 0;
        else if (lx >= l && rx <= r)
            return v[x];
        else
        {
            int s1 = sum(l, r, 2 * x + 1, lx, (lx + rx) / 2);
            int s2 = sum(l, r, 2 * x + 2, (lx + rx) / 2, rx);
            return s1 + s2;
        }
    }
    int sum(int l, int r)
    {
        return sum(l, r, 0, 0, size);
    }
    void set(int l, int r)
    {
        set(l, r, 0, 0, size);
    }
};
template <typename T>
void __p(T a)
{
    cout << "(" << a << ")";
}
template <typename T, typename F>
void __p(pair<T, F> a)
{
    cout << "(";
    cout << a.first;
    cout << ",";
    cout << a.second;
    cout << ")";
}
template <typename T>
void __p(std::vector<T> a)
{
    for (auto it = a.begin(); it < a.end(); it++)
        cout << *it << " ";
}
template <typename T>
void __p(std::set<T> a)
{
    for (auto it = a.begin(); it != a.end(); it++)
    {
        cout << *it << " ";
    }
}
template <typename T>
void __p(std::multiset<T> a)
{
    for (auto it = a.begin(); it != a.end(); it++)
    {
        cout << *it << " ";
    }
}
template <typename T, typename F>
void __p(std::map<T, F> a)
{
    for (auto it = a.begin(); it != a.end(); ++it)
    {
        cout << it->first << " ";
        cout << it->second << " ";
        cout << endl;
    }
}
template <typename T, typename... Arg>
void __p(T a1, Arg... a)
{
    __p(a1);
    __p(a...);
}
template <typename Arg1>
void __f(const char *name, Arg1 &&arg1)
{
    __p(arg1);
    cout << endl;
}
template <typename Arg1, typename... Args>
void __f(const char *names, Arg1 &&arg1, Args &&... args)
{
    int bracket = 0, i = 0;
    for (;; i++)
        if (names[i] == ',' && bracket == 0)
            break;
        else if (names[i] == '(')
            bracket++;
        else if (names[i] == ')')
            bracket--;
    const char *comma = names + i;
    __p(arg1);
    cout << ",";
    __f(comma + 1, args...);
}
#define trace(...) __f(#__VA_ARGS__, __VA_ARGS__)
vector<bool> is_prime(100000 + 1, true);
void seive(int n)
{
    is_prime[0] = is_prime[1] = false;
    for (int i = 2; i * i <= n; i++)
    {
        if (is_prime[i])
        {
            for (int j = i * i; j <= n; j += i)
                is_prime[j] = false;
        }
    }
}
int get_inv(int x)
{
    if (x <= 1)
        return 1;
    return (mod - mod / x) * get_inv(mod % x) % mod;
}
int power(int a, int b, int p = mod)
{
    int ans = 1;
    a = a % p;
    while (b > 0)
    {
        if (b % 2 == 1)
        {
            ans = (ans * a) % p;
        }
        b = b >> 1;
        a = (a * a) % p;
    }
    return ans;
}
void show(int *a, int n)
{
    int size = n;
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}
//modify this according to the problem statement.
int binary_search(int *a, int n, int e)
{
    int l = -1, r = n, m = 0;
    while (l + 1 < r)
    {
        m = (l + r) / 2;
        if (a[m] <= e)
        {
            l = m;
        }
        else
        {
            r = m;
        }
    }
    return l;
}
vector<int> fac(100001);
void fact()
{
    fac[0] = 1;
    for (int i = 1; i < 100001; i++)
    {
        fac[i] = (fac[i - 1] * i) % mod;
    }
}
//ncr is fac(n)*get_inv(fac(n-r))*get_inv(fac(r));
bool cmp(const pair<int, int> &a, const pair<int, int> &b)
{
    return (a.second < b.second);
}
//don't forgot to declare v(n);
//lambda functions can have acess to global variables.
void solve()
{
    //don't forgot to change the debugger.
    int n;
    cin >> n;
    cout << (n + 1) / 2 << endl;
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout << fixed << setprecision(15);
    int t = 1;
    cin >> t;
    //seive(100000);
    //fact();
    while (t--)
    {
        solve();
    }
}