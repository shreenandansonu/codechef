#include <bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin >> t;
while(t--)
{
    int r;
    cin>>r;
    r=r*1000;
    int h=ceil(float(r)/2);
    int l =(r)-h;
    int p= l/5;
    cout<<p<<endl;

}
return 0;
}