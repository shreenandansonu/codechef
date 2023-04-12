#include <bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin >> t;
while(t--)
{
    string n,l="000";
    cin>>n;
    n=l+n;
    int m=n.length(),k;
    
    k=(int(n[m-1])-48)+10*(int(n[m-2])-48);
    cout<<k%20<<endl;

}
return 0;
}