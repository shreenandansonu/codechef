
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        string s, p = "";
        cin >> n >> s;

        int c = 1;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == s[i + 1])
            {
                c++;
            }
            else if (c == 1)
            {
                p.append(1,s[i]);
                c = 1;
            }
            else if (c % 2 == 0)
            {
                p.append(2,s[i]);
                c = 1;
            }

            else if (c % 2 != 0)
            {
                p.append(1,s[i]);
                c = 1;
            }
        }
        cout << p << endl;
    }
    return 0;
}