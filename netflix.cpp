#include <iostream>
using namespace std;
void answer()
{
    int A,B,C,X;
    cin>>A>>B>>C>>X;
    if (A+B>=X || B+C>=X || A+C>=X){
        cout<<"YES"<<endl;
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