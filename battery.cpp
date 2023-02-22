#include <iostream>
using namespace std;
void answer()
{
    int x;
    cin >> x;
    if (x>=80){
        cout<<"yES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
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