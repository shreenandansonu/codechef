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
        int a = 0;
        for (int i = 0; n != 50; i++)
        {
            if (n > 50)
            {
                n = n - 3;
                a++;
            }
            else
            {
                n = n + 2;
                a++;
            }
        }
        cout << a << endl;
    }
    return 0;
}