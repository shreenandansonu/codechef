#include <iostream>
using namespace std;
int main()
{
    int t, x;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> x;
        while (x > 10)
        {
            if (x % 10 == 7){
                cout << ("YES")<<endl;
                break;
            }
            else{
                x /= 10;
            }
        }
        if (x <= 10)
        {
            if (x == 7){
                cout << ("YES")<<endl;
            }
            else{
                cout << ("NO")<<endl;
            }
        }
    }
    return 0;
}