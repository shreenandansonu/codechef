#include <bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin >> t;
while(t--)
{
    int a;
    cin>>a;
    if(a%14==0) cout<<"ALICE"<<endl;
    else if (a%9==0 and a%18!=0) cout<<"BOB"<<endl;
    else cout<<"CHARLIE"<<endl;
    
}
return 0;
}