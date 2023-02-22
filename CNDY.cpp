#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void answer()
{
    int n, N[(2 * n)], count = 0;
    cin >> n;
    for (int i = 0; i < (2 * n); i++)
    {
        cin >> N[i];
    }
    //array input taken
    sort(N, N + (2 * n));

    for (int j = 0; j < ((2 * n)-2); j++)
    {
        if (N[j] == N[j + 1] && N[j] == N[j + 2])
        {
            //cout << j << "line 1" << endl;
            count=1;
            break;
        }
    }
    if (count == 1)
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "YES" << endl;
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

/*
8
3
1 2 4 1 5 2
4
1 2 1 2 5 4 4 5

*/