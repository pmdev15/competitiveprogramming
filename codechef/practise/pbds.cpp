#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace std;
using namespace __gnu_pbds;
typedef tree<int, null_type, less<int>(), rb_tree_tag, tree_order_statistics_node_update> pbdsr;
int main()
{
    pbdsr arr;
    for (int i = 0; i < 10; i++)
    {
        arr.insert(i);
    }
    cout<<*arr.find_by_order(0)<<endl;
    cout<<*arr.find_by_order(2)<<endl;
    cout<<*arr.find_by_order(3)<<endl;
    cout<<*arr.find_by_order(10)<<endl;
    cout<<*arr.find_by_order(20)<<endl;
    
    return 0;
}
