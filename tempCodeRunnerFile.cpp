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
        if (n == 1)
        {
            cout << 1 << endl;
        }
        else if (n == 2)
        {
            cout << "2 1" << endl;
        }
        else
        {
            if (n % 2 == 0)
            {
                for (int i = n; i > 0; i--)
                {
                    cout << i << " ";
                }
                cout << endl;
            }
            else
            {
                cout << -1 << endl;
            }
        }
    }
    return 0;
}