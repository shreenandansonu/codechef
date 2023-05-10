#include <bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin >> t;
while(t--)
{
    int prof[4],sum=0;
    for (int i = 0; i < 4; i++)
    {
        cin>>prof[i];
        sum+=prof[i];
        
    }
    sort(prof,prof+4);
    if ((2*prof[3])>sum) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    
}
return 0;
}