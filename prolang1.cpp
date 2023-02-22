#include <iostream>
using namespace std;
void answer()
{
    int a,b,c,d,e,f;
    cin>>a>>b>>c>>d>>e>>f;
    if ((a==c || a==d) &&(b==c || b==d)){
        cout<<1<<endl;
    }
    else if ((a==e || a==f) &&(b==e || b==f)){
        cout<<2<<endl;
    }
    else{
        cout<<0<<endl;
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