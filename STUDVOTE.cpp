#include <bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin >> t;
while(t--)
{
    int n,k; 0
    cin>>n>>k;
    int vote[n],count[n+1]={0},violated[n+1]={0};
    for (int i = 0; i < n; i++)
    {
        cin>>vote[i];
        count[vote[i]]++;
        if(vote[i]==(i+1)) violated[vote[i]]=-1;
    }
    int winner=0;
    for (int i = 1; i < n+1; i++)
    {
        if(count[i]>=k & violated[i]!=-1) winner++;
    }
    cout<<winner<<endl;
          
}
return 0;
}