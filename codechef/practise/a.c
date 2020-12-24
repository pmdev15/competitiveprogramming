#include <stdio.h>
void average(float arr[], int n)
{
    float sum = 0;
    for (int ab = 0; ab < n; ab++)
    {
        sum = sum + arr[ab];
    }
    float aver = (sum / n);
    printf("%f", aver);
}
int main()
{
// #ifndef ONLINE_JUDGE
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
// #endif
    int n;
    scanf("%f", &n);
    float arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%f", &arr[i]);
    }
    average(arr, n);
    return 0;
}