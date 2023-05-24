#include <bits/stdc++.h>
using namespace std;
# define int long long 

bool ifap(int n, int sequence[])
{
    bool isAPFree=true;
    for (int i = 0; i < n - 2; i++) {
        for (int j = i + 1; j < n - 1; j++) {
            for (int k = j + 1; k < n; k++) {
                if (sequence[j] - sequence[i] == sequence[k] - sequence[j]) {
                    isAPFree = false;
                    break;
                }
            }
            if (!isAPFree) {
                break;
            }
        }
        if (!isAPFree) {
            break;
        }
    }

    return isAPFree;
}

signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int  a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        if (ifap(n, a))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
