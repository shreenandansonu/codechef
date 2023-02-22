#include <iostream>
using namespace std;
void answer()
{
    int a,b 
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

/*#include <iostream>
using namespace std;
void answer()
{
    int a, b, counta = 0, countb = 0;
    cin >> a >> b;
    for (int i = 1; i < a + b; i++)
    {
        if (i % 2 == 0)
        {
            if (countb + i < b)
            {
                countb += i;
            }
            else if (countb + i == b)
            {
                cout << "Bob\n";
                break;
            }
            else
            {
                cout << "Limak\n";
                break;
            }
        }
        else
        {
            if (counta + i < a)
            {
                counta += i;
            }
            else if (counta+i==a)
            {
                cout<<"Limak\n";
                break;
            }
            
            else
            {
                cout << "Bob\n";
                break;
            }
        }
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