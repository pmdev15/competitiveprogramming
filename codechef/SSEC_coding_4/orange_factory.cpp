#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int x, m, sum = 0;
    cin >> x >> m;
    int arr[x];
    for (int i = 0; i < x; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }

    if (m < sum)
    {
        cout << "Thank you, your order for " << m << " oranges are accepted" << endl;
        for (int j = 0; j < x; j++)
        {
            if (m > arr[j] || m > arr[j + 1])
            {
                if ((m - arr[j]) > arr[j])
                {
                    cout << arr[j] << "  " << arr[j] << "  " << 0 << endl;
                }
                else
                {
                    cout << arr[j] << "  " << (arr[j] - (arr[j] - m)) << "  " << (arr[j] - m) << endl;
                }
            }
            else
            {
                cout << arr[j] << "  " << 0 << "  " << arr[j] << endl;
            }
            m -= arr[j];
        }
    }
    else
    {
        cout << "Sorry, we can only supply " << (sum - 1) << " oranges" << endl;
        m = (sum - 1);
        for (int j = 0; j < x; j++)
        {
            if (m > arr[j] || m > arr[j + 1])
            {
                if ((m - arr[j]) > arr[j])
                {
                    cout << arr[j] << " " << arr[j] << " " << 0 << endl;
                }
                else
                {
                    cout << arr[j] << " " << (arr[j] - (arr[j] - m)) << " " << abs((arr[j] - m)) << endl;
                }
            }
            else
            {
                cout << arr[j] << " " << (arr[j]-1) << " " << 1 << endl;
            }
            m -= arr[j];
        }
    }

    return 0;
}
