#include <iostream>
using namespace std;
void answer()
{
    int A1,A2,A3,B1,B2,B3;
    cin>>A1>>A2>>A3;
    cin>>B1>>B2>>B3;
    if((A1+A2+A3)==(B1+B2+B3)){
        cout<<"Pass"<<endl;
    }
    else{
        cout<<"Fail"<<endl;
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