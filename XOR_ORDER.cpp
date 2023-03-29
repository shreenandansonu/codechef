#include <bits/stdc++.h>
using namespace std;

void solve()
{

    int a, b, c;
    cin >> a >> b >> c;

    if (a > b and b > c)
        cout << a << endl;
    else if (a < b and b < c)
        cout << 0 << endl;
    else
        cout << -1 << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
