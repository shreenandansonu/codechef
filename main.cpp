#include <iostream>
using namespace std;
int main()
{
int t;
cin >> t;
for (int i = 0; i < t; i++)
{
    bool failed = false;
    int N, K;
    cin >> N >> K;
    int diet[N];
    for (int j = 0; j < N; j++)
    {
        cin >> diet[j];
    }
    int remaining = 0, count = 0;
    for (int j=0; j < N; j++)
    {
        if (diet[j] >= K)
        {
            count++;
            remaining = diet[j] - K;
        }
        else
        {
            if (diet[j] + remaining >= K)
            {
                count++;
                remaining -= (K - diet[j]);
            }
            else
            {
                cout << "NO " << j+1 << endl;
                failed = true;
                break;
            }
        }
    }
    if (count == N)
    {
        cout << "YES" << endl;
    }
    if (failed)
    {
        break;
    }
}

return 0;
}