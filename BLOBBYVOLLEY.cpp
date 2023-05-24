#include <bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin >> t;
while(t--)
{
    int n,a=0,b=0,s=1,p=0;
    cin>>n;
    string q;
    cin>>q;
    for (int i = 0; i < n; i++)
    {
        if(q[i]=='A' and s==1){
            a++;
        }
        else if(q[i]=='B' and p==1){
            b++;
        }
        else{
            swap(s,p);
        }
    }
    cout<<a<<" "<<b<<endl;
    
}
return 0;
}