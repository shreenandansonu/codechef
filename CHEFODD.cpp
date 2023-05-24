#include <bits/stdc++.h>
using namespace std;
using ll = unsigned long long;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n, k, s;
        cin >> n >> k;
        s = (((n * (n + 1)) / 2) - (((2 * k) * (2 * k + 1)) / 2));
        cout << s << endl;
        if (n < (k * 2))
        {
            cout << "NO" << endl;
        }

        else
        {
            if (s % 2 == 0)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }
    return 0;
}