#include <bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin >> t;
while(t--)
{
    int n, k=1 ,l=0 ;
        string S;
        cin >> n;
        cin >> S;
        char x = '1', y = '0';
        for (int i = 1; i < n; i++)
        {
            if (x != S[i - 1])
            {
                x = '1';
                k++;
            }
            else
                x = '0';
            if (y != S[i - 1])
            {
                y = '1';
                l++;
            }
            else
                y = '0';
        }
        cout << max(l, k) << endl;
}
return 0;
}