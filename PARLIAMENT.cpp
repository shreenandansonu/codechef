#include <bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin >> t;
while(t--)
{
 int n,x;
 cin>>n>>x;
 if(x>=ceil(double(n)/2)) cout<<"YES"<<endl;
 else cout<<"NO"<<endl;
}
return 0;
}