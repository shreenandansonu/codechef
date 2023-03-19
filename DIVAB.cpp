#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int A, B, N, x;
        cin >> A >> B >> N;
        if (A % B==0)
        {
            cout << -1 << endl;
        }
        else
        {
            if (N % A == 0)
            {
                x = N / A;
            }
            else
            {
                x = (N / A) + 1;
            }
            int y = A * x;
            while (y % B == 0)
            {
                y += A;
            }
            cout << y << endl;
        }
    }
    return 0;
}