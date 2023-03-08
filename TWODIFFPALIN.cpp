#include <bits/stdc++.h>
using namespace std;
void answer()
{
    int a, b;
    cin >> a >> b;
    if (a % 2 == 0)
    {
        if (b % 2 == 0)
        {
            cout << "YES" << endl;
        }
        else
        {
            if (b >= 3)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }
    else
    {
        if (a >= 3)
        {
            if (b % 2 == 0)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
        else
        {
            cout << "NO" << endl;
        }
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