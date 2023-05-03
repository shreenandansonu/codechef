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
    double x=n - (0.1 * n);
    if(x>m) cout<<"DINING"<<endl;
    else if (x<m) cout<<"ONLINE"<<endl;
    else cout<<"EITHER"<<endl;
}
return 0;
}