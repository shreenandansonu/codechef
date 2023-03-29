#include <bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin >> t;
while(t--)
{
    int n,a,b;
    cin>>n>>a>>b;
    int x=n/2;
    cout<<x*a+(n-x)*b<<endl;
}
return 0;
}