#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int a, b, hcf;
        hcf = 1;
        cin >> a >> b;
        int d = min(a, b);
        for (int j = 2; j < d + 1; j++)
        {
            if (a % j == 0 and b % j == 0)
            {
                hcf = j;
            }
        }
        int lcm = ((long int)a*b) / (long int)hcf;
        cout << hcf << " " << lcm << endl;
    }
    return 0;
}
