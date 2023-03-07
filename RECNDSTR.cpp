#include <bits/stdc++.h>
using namespace std;
/*We are getting the input string from right and left shift of 
v so if we reverse the input string then we must find v*/
void answer()
{
    string str;
    cin>>str;
    string a= str.substr(1,(str.length()-1))+str[0]; //reverse right shift
    string b= str[(str.length())-1]+str.substr(0,(str.length()-1));// reverse left shift
    if(a==b){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
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