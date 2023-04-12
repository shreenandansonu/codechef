#include <bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin >> t;
while(t--)
{
    int n,cum=0,cnt=0;
    cin>>n;
    int run[n];
    for (int i = 1; i <=n; i++)
    {
        cin>>run[i];
        cum+=run[i];
        if(double(cum)/i==1) cnt+=1;
    }
    cout<<cnt<<endl;
}
return 0;
}