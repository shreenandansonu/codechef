#include <bits/stdc++.h>
using namespace std;
void answer()
{
    int n;
    cin >> n;
    int wish[n];
    for (int i = 0; i < n; i++)
    {
        cin >> wish[i];
    }
    int count = 0;
    for (int j = 1; j < n - 1; j++)
    {
        if (wish[j] != wish[j - 1] || wish[j] != wish[j + 1])
        {
            count++;
        }
    }
    if (wish[n - 1] != wish[n - 2])
    {
        count++;
    }
    if (wish[0] != wish[1])
    {
        count++;
    }
    cout << count << endl;
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