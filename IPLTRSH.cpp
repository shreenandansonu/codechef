#include <bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin >> t;
while(t--)
{
    int n,m;
    cin>>n>>m;
    if(m<=n) cout<<n-m<<endl;
    else cout<<0<<endl;
}
return 0;
}