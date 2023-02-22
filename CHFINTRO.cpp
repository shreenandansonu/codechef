#include <iostream>
using namespace std;
void answer()
{
}
int main()
{
    int N, r, a;
    cin >> N >> r;
    for (int i = 0; i < N; i++)
    {
        cin >> a;
        if (a >= r)
        {
            cout << "Good boi"<<endl;
        }
        else
        {
            cout << "Bad boi"<<endl;
        }
    }
    return 0;
}