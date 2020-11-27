#include <bits/stdc++.h>
using namespace std;

#define forp(i, a, b) for (int i = a; i < b; i++)
#define ll long long
#define print(x) printf("%d", x)
#define read(x) scanf("%d", &x)
#define mod 1000000007

int indexofSmallestElement(int array[], int size)
{
    int index = 0;

    if (size != 1)
    {
        int n = array[0];
        for (int i = 1; i < size; i++)
        {
            if (array[i] < n)
            {
                n = array[i];
                index = i;
            }
        }
    }
    return index;
}
void solve()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    bool flag = false;
    for (int j = 0; j < n; j++)
    {
        if (arr[j] == arr[j + 1])
        {
            flag = true;
        }
    }
    if (flag==false)
    {
        cout<<indexofSmallestElement(arr,n)<<endl;
    }
    else
    {
        cout<<-1<<endl;
    }
    
    
}
int main()
{
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
}