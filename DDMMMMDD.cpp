#include <bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin >> t;
while(t--)
{
 string s;
 cin>>s;
 if((10*(s[0]-48)+(s[1]-48))>12){
    cout<<"DD/MM/YYYY"<<endl;
 }
 else{
    if((10*(s[3]-48)+(s[4]-48))>12){
        cout<<"MM/DD/YYYY"<<endl;
    }
    else{
        cout<<"BOTH"<<endl;
    }
 }   
}
return 0;
}