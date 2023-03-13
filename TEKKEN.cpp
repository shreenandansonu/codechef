#include <iostream>
using namespace std;
void answer()
{
    int a, b, c;
    cin >> a >> b >> c;
    if (a > abs(b - c)) // posetive hona chahiye 
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
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