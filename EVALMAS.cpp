#include <bits/stdc++.h>
using namespace std;
void answer()
{
    int N, X;
    cin >> N >> X;
    string S;
    if (X > 0)
    {

        if (N < X - 1)
        {
            cout << -1 << endl;
        }
        else
        {
            for (int j = 1; j < N + 1; j++)
            {
                if (j <= N - X + 1)
                {
                    S += '*';
                }
                else
                {
                    S += '+';
                }
            }
        }
    }
    else
    {
        if (N <= abs(X))
        {
            cout << -1 << endl;
        }
        else
        {
            for (int j = 1; j < N + 1; j++)
            {
                if (j <= N - abs(X)-1)
                {
                    S += '*';
                }
                else
                {
                    S += '-';
                }
            }
        }
    }
    cout << S << endl;
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