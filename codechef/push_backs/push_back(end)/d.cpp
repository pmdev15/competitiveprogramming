#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, m;
    cin >> n >> m;
    int arrn[n], arrm[m];
    vector<int> arr;
    for (int i = 0; i < n; i++)
    {
        cin >> arrn[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> arrm[i];
    }
    bool flag = false;
    for (int j = 0; j < n; j++)
    {
        for (int k = 0; k < m; k++)
        {
            if (arrn[j] != arrm[k])
            {
                flag = true;
            }
            else
                flag = false;
        }
        if (flag=true)
        {
            arr.push_back(arr[])
        }
        
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
    return 0;
}

// #include<iostream> 
// using namespace std; 
// void symmDiff(int arr1[], int arr2[], int n, int m) 
// { 
//     int i = 0, j = 0; 
//     while (i < n || j < m) 
//     { 
//         if (arr1[i] < arr2[j]) 
//         { 
//             cout << arr1[i]<<" "; 
//             i++; 
//         } 
//         else if (arr2[j] < arr1[i]) 
//         { 
//             cout << arr2[j]<<" "; 
//             j++; 
//         } 
//         else
//         { 
//             i++; 
//             j++; 
//         } 
//     } 
// } 
  
// int main() 
// { 
//     int n; 
//     int m; 
//     cin>>n>>m;
//     int arr1[n]; 
//     int arr2[m]; 
//     for (int i = 0; i < n; i++)
//     {
//         cin>>arr1[i];
//     }
//     for (int i = 0; i < m; i++)
//     {
//         cin>>arr2[i];
//     }
    
//     symmDiff(arr1, arr2, n, m); 
//     return 0; 
// } 
