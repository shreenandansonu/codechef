#include <bits/stdc++.h>
using namespace std;
void answer()
{
    int x, y;
    cin >> x >> y;
    int times = 0;
    if (x == 3 | x == 5 | x == 7 | x == 9)
    {
        if (x != 9)
        {
            x += x;
            times = 1;
        }
        else
        {
            x += 3;
            times = 1;
        }
    }
    times += (y - x+1) / 2;
    cout << times << endl;
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