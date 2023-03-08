#include <bits/stdc++.h>
using namespace std;
void answer()
{
    int A,B,P,Q;
    cin>>A>>B>>P>>Q;
    int x=A+B;
    int y=Q+P;
    if(A==P and B==Q){
        cout<<0<<endl;
    }
    else if( (x%2==0 and y%2==0) or (x%2!=0 and y%2!=0)){
        cout<<2<<endl;
    }
    else if((x%2==0 and y%2!=0) or (x%2!=0 and y%2==0)){
        cout<<1<<endl;
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