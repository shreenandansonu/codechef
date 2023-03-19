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
        int miny = INT_MAX, maxi = INT_MIN, count = 1;
        for (int i = 1; i < n; i++)
        {
            if (abs(arr[i] - arr[i - 1]) <= 2)
            {
                count++;
            }
            else
            {
                miny = min(miny, count);
                maxi = max(maxi, count);
                count = 1;
            }
        }
        miny = min(miny, count);
        maxi = max(maxi, count);
        cout << miny << " " << maxi << endl;
    }
    return 0;
}