#include <bits/stdc++.h>
using namespace std;
void answer()
{
    int a, b, c, p, q, r;
    cin >> a >> b >> c >> p >> q >> r;
    int req = ((p + q + r) / 2) ;
    int w, x, y, z;
    x = max(p, q);
    y = max(x, r);
    z = (a + b + c + y);
    if (y == p)
    {
        w = a;
    }

    else if (y == q)
    {
        w = b;
    }
    else
    {
        w = c;
    }

    if (z - w > req)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        answer();
    }
    return 0;
}