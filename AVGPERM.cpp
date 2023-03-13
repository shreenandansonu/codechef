#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin >> N;
        int arr[N];
        if (N >= 5)
        {
            arr[0] = N;
            arr[N - 1] = N - 1;
            arr[1] = N - 2;
            arr[N - 2] = N - 3;
            for (int i = 1; i < N - 3; i++)
            {   
                arr[i + 1] = i;
            }
            for (int i = 0; i < N; i++)
            {
                cout << arr[i] << " ";
            }
            cout << endl;
        }
        else
        {
            for (int i = 1; i < N; i++)
            {
                cout << N - i << " ";
            }
            cout << N << endl;
        }
    }

    return 0;
}