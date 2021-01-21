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

int main(int argc, char const *argv[])
{
    __print("pullak");
    return 0;
}
