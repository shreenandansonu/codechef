#include <iostream>
using namespace std;
void answer()
{
    int D,d,A,B,C;
    cin>>D>>d>>A>>B>>C;
    int totdic=D*d;
    if(totdic>=42){
        cout<<C<<endl;
    }
    else if (totdic>=21)
    {
        cout<<B<<endl;
    }
    else if(totdic>=10){
        cout<<A<<endl;
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