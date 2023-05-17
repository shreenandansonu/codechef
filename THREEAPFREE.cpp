#include <bits/stdc++.h>
using namespace std;

bool ifap(int n, int a[])
{
    for (int i = 1; i < n - 1; i++)
    {
        int s = 0, t = n - 1, sum = 2 * a[i];
        while (s < i and t > i)
        {
            if (sum > a[s] + a[t])
                t--;
            else if (sum < a[s] + a[t])
                s++;
            else
                return true;
        }
    }
    return false;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        if (ifap(n, a))
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
    return 0;
}
