#include <bits/stdc++.h>
using namespace std;
int main()
{
int a;
cin>>a;
int x=a%6;
if(x==1 || x==3 || x==0){
    cout<<"yes"<<endl;
}
else{
    cout<<"no"<<endl;
}
return 0;
}