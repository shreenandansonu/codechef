#include <iostream>
using namespace std;
void answer()
{
    int n, A[n];
    cin >> n;
    for (int l = 0; l < n; l++)
    {
        cin >> A[l];
    }
    int count = 1, count2 = 0;
    for (int k = 0; k < n; k++)
    {
        for (int j = k; j < n; j++)
        {
            if (A[j] == A[k])
            {
                count++;
            }
        }
        if (count >= count2)
        {
            count = count2;
        }
        else
        {
            count = 0;
        }
    }
    cout << n - count2 << endl;
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