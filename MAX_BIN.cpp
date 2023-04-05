#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        string s;
        cin >> n >> k >> s;
        if (s[0] == '0')
        {
            s[0] = '1';
            k--;
            if (k > 0)
            {
                s.insert(n, k, '0');
            }
        }
        else
        {
            s.insert(n, k, '0');
        }
        cout << s << endl;
    }
    return 0;
}
