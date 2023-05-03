#include <bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin >> t;
while(t--)
{
    float n,m;
    cin>>n>>m;
    if(n-((10/100)*n)>m) cout<<"DINING"<<endl;
    else if (n-((10/100)*n)=m) cout<<"EITHER"<<endl;
    else cout<<"ONLINE"<<endl;

}
return 0;
}