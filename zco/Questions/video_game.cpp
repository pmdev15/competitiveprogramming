#include <bits/stdc++.h>
#include <vector>
using namespace std;
vector<int> arr;
int plc = 0;
bool flag;
// 1 : Move left

// 2 : Move right

// 3 : Pick up box

// 4 : Drop box

// 0 : Quit
int left()
{
}
int right()
{
}
int pick()
{
}
int drop()
{
}

int main(int argc, char const *argv[])
{
    int n;
    long long int h;
    scanf("%lld %lld", &n, &h);

    for (int i = 0; i < n; i++)
    {
        long long x;
        scanf("%lld", &x);
        arr.push_back(x);
    }

    int crn;

    while (crn != 0)
    {
        cin >> crn;
        switch (crn)
        {
        case 1:
            left();
            break;
        case 2:
            right();
            break;
        case 3:
            pick();
            break;
        case 4:
            drop();
            break;
        case 0:
            break;
        }

        return 0;
    }
