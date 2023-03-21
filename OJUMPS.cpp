#include <bits/stdc++.h>
using namespace std;
/*string solve(){
    int a;
    cin>>a;
    int x=a%6;
    if( x==1 || x==3 || x==0 ){
        return "yes";
    }       
    return "no";
}*/
int main()
{
    int a;
    cin>>a;
    if(a%6==0||a%6==1||a%6==3)
    {
        cout<<"yes"<<endl;
    }
    else
    {
        cout<<"no"<<endl;
    }
return 0;
}