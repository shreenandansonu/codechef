#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        sort(arr, arr + n);
        int z = (arr[n - 1] + arr[n - 2]);
        if (n == 2)
        {
            cout << "NO" << endl;
        }
        else
        {
            int count = 1;
            for (int i = n - 2; i >= 0; i--)
            {
                if (arr[n - 1] == arr[i] or arr[n - 2] == arr[i])
                {
                    count++;
                }
                else
                {
                    break;
                }
            }
            if (arr[n - 1] == arr[n - 2])
            {
                if (count <= ceil(double(n) / 2))
                    cout << "YES" << endl;
                else
                    cout << "NO" << endl;
            }
            else{
                if (count-1 < n-1)
                    cout << "YES" << endl;
                else
                    cout << "NO" << endl;
            }
        }
    }
    return 0;
}