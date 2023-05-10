#include <bits/stdc++.h>

using namespace std;

int countjoda(int n)
{
    int joda = n * (n - 1) / 2;
    return joda;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        unordered_map<int, int> freq;
        for (int i = 0; i < n; i++)
        {
            int num;
            cin >> num;
            freq[num]++;
        }

        int totaljoda = countjoda(n);
        for (auto & [num, freq] : freq)
        {
            int jodaWithNum = countjoda(freq);
            totaljoda -= jodaWithNum;
        }

        cout << totaljoda << endl;
    }
    return 0;
}