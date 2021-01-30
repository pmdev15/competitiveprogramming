#define db(x) cerr << #x << ": " << (x) << '\n';
#define rall(x) x.rbegin(), x.rend()

mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
/// Functions:
#define lg2(x) 31 - __builtin_clz(x)
#define lgx(x, b) (log(x) / log(b))

//typedef tree < long long ,  null_type ,  less<long long> ,  rb_tree_tag ,  tree_order_statistics_node_update > ordered_set;
int qpow(int b, int e)
{
    if (!e)
        return 1;
    if (e & 1)
        return qpow(b, e - 1) * b % mod;
    int pwur = qpow(b, e >> 1);
    return pwur * pwur % mod;
}
int modinv(int x)
{
    return qpow(x, mod - 2);
}
/