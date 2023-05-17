#include <bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin >> t;
while(t--)
{
    int n;
    cin>>n;
    int b[n] ,q=0;
    for (int i = 0; i < n; i++)
    {
        cin>>b[i];
        if (b[i]<0) q+=i+1;
    }
    cout<<abs(((n*(n+1))/2)-(2*q))<<endl;
}
}