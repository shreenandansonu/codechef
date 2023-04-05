#include <bits/stdc++.h>
using namespace std;
void answer()
{
    int n;
    string s;
    cin>>n>>s;
    int x=0;
    for(int i=0;i<n;i++){
        x+=int(s[n-1-i]-48)*pow(2,i);
    }
    int maxi=INT_MIN,z=0;
    for (int  j = 1; j <=n; j++)
    {
      int y=x^(x>>j);
      if(y>maxi){
        maxi=y;
         z=j;
      }
    }
    cout<<z<<endl;
    
    
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