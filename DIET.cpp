#include <iostream>
using namespace std;
void answer()
{
    int N, K, remaining = 0, count = 0;
    cin >> N >> K;
    int diet[N];

    for (int j = 0; j < N; j++)
    {
        cin >> diet[j];
    }
    for (int j = 0; j < N; j++)
    {

        remaining += diet[j];
        if (remaining < K)
        {
            count = j + 1;
            break;
        }
        else
        {
            remaining -= K;
        }
    }
    if (count == 0)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO"
             << " " << count << endl;
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