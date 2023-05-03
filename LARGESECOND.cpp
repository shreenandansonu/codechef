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
        int sum = arr[n - 1];
        for (int i = n - 2; i >= 0; i--)
        {
            if (arr[n - 1] != arr[i])
            {
                sum += arr[i];
                break;
            }
        }
        cout<<sum<<endl;
    }
    return 0;
}