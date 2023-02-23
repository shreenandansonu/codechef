#include <iostream>
using namespace std;
void answer()
{
    int x,y;
    cin>>x>>y;
    if(x>=y){
        cout<<y<<endl;
    }
    else{
        cout<<(x+(y-x)*2)<<endl;
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