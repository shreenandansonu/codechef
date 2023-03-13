#include <bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin >> t;
while(t--)
{
    int N,K,S;
    cin>>N>>K>>S;

    cout<<(S-pow(N,2))/(K-1)<<endl;
    
}
return 0;
}