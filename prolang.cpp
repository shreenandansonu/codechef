#include <iostream>
using namespace std;
void answer()
{
        int a,b,c,d,e,f;
        cin>>a>>b>>c>>d>>e>>f;
        int g,h,i;
        g=a*b;
        h=c*d;
        i=e*f;
        if(g==h){
            cout<<1<<endl;
        }
        else if (g==i)
        {
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