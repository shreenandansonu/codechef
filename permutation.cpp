#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        for (int j = 1; j < n + 1; j++)
        {
            if (j !=n)
            {
                cout << j + 1 << " ";
            }
            else
            {
                cout << 1 << endl;
            }
        }
    }
}
