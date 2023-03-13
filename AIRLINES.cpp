#include <iostream>
using namespace std;
void answer()
{
    int x,y,z;
    cin>>x>>y>>z;
    if(x*10>=y){
        cout<<(y*z)<<endl;
    }
    else{
        cout<<(x*10)*z<<endl;
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