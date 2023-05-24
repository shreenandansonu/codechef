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
        string s;
        if ((n <= 10 and n >= 1) or (n <= 25 and n >= 16))
        {
            if (n <= 10)
            {
                s = "Lower ";
            }
            else
            {
                s = "Upper ";
            }
            s += "Double";
        }
        else
        {
            if (n <= 15)
            {
                s = "Lower ";
            }
            else
            {
                s = "Upper ";
            }

            s+= "Single";
        }
        cout<<s<<endl;
    }
    return 0;
}