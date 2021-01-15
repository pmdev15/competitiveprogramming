#include <bits/stdc++.h>
using namespace std;

#define ll long long

int printIntersection(int arr1[], int arr2[], int m, int n)
{
    int i = 0, j = 0;
    bool flag = false;
    while (i < m && j < n)
    {
        flag = false;
        if (arr1[i] < arr2[j])
        {
            flag = false;
            i++;
        }
        else if (arr2[j] < arr1[i])
        {
            flag = false;
            j++;
        }
        else
        {
            flag = true;
            i++;
            j++;
        }
    }
    if (flag != true)
    {
        return arr2[j];
    }
    else
    {
        return 0;
    }
}

void solve()
{
    int arr[4];
    int arr1[4];
    int a, b;
    cin >> a;
    int num, j = 0;
    for (int i = 0; i < 4; i++)
    {
        if (i == a)
        {
            cin >> arr[j];
            j++;
        }
    }
    cin >> b;
    j = 0;
    for (int i = 0; i < 4; i++)
    {
        if (i == b)
        {
            cin >> arr1[j];
            j++;
        }
    }
    for (int k = 0; k < 4; k++)
    {
        if (printIntersection(arr, arr1, 4, 4)!=0)
        {
            cout<<printIntersection(arr,arr1,4,4);
        }
        else
        {
            if (/* condition */)
            {
                /* code */
            }
            
        }
        
    }
}
int main()
{
    int t = 1;
    cin >> t;
    int abc = 1;
    while (t--)
    {
        solve();
        printf("Case #%d: ", abc);
        abc++;
    }
    return 0;
}