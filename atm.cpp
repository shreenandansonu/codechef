#include <iostream>
using namespace std;

void answer(){
    int k, n;
        string s;
        cin >> n >> k;
        int amount[n] = {};
        for (int i = 0; i < n; i++)
        {
            cin >> amount[i];
        }
        for (int m = 0; m < n; m++)
        {
            if (amount[m] <= k)
            {
                k -= amount[m];
                s += '1';
            }
            else
            {
                s += '0';
            }
        }
        cout << s << endl;
}
int main()
{
    int t;
    cin >> t;
    for (int j = 0; j < t; j++)
    {
        answer();
    }
    return 0;
}