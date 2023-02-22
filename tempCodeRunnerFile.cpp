#include <iostream>
using namespace std;
void answer()
{
    int n;
    cin >> n;
    int N[n];
    for (int j = 0; j < n; j++)
    {
        cin >> N[j];
    }
    /*either you take count 0 or you take 2nd
    loop from one more than the outer loop .
    This is to count the original number
    itself along with the smaes*/
    int count1 = 1, count2 = 0;
    for (int k = 0; k < n; k++)
    {
        for (int l = k + 1; l < n; l++)
        {
            if (N[k] == N[l])
            {
                count1++;
            }
        }
        if (count1 > count2)
        {
            count2 = count1;
            count1 = 0;
        }
        else
        {
            count1 = 0;
        }
    }
    cout << (n - count2) << endl;
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
5
7 8 8 9 5
*/