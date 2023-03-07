#include <bits/stdc++.h>
using namespace std;
void answer()
{
    string D;
    cin >> D;
    int x = D.size();
    int o = 0, z = 0;
    if (x == 1)
    {
        cout << "Yes" << endl;
    }
    else
    {
        for (int i = 0; i < x; i++)
        {
            if (D[i] == '0')
            {
                o++;
            }
            else
            {
                z++;
            }
        }
        if (min(o, z) == 1)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
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