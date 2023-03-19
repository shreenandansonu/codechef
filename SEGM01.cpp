#include <bits/stdc++.h>
using namespace std;
string solve(){
        string s;
        cin >> s;
        int x = s.length();
        int count = 0;
        if (s[0] == '1')
        {
            for (int i = 1; i < x; i++)
            {
                if (s[i] != s[i - 1])
                {
                    count++;
                }
                if (count > 1)
                {
                    return "NO";
                    break;
                }
            }
        }
        else
        {
            for (int i = 1; i < x; i++)
            {
                if (s[i] != s[i - 1])
                {
                    count++;
                }
                if (count > 2 )
                {
                    return "NO";
                    break;
                }
            }
            if(count==0)
            return "NO";
        }

        return "YES";
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cout<<solve()<<endl;
    }
}