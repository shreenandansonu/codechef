#include <iostream>
using namespace std;
void answer()
{
    int x, y;
    cin >> x>> y;
    if (x >= y)
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "YES" << endl;
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