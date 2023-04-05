#include <bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin >> t;
while(t--)
{
    int x,n,count=0;
    cin>>n>>x;
    int ages[n];
    for (int i = 0; i < n; i++)
    {
        cin>>ages[i];
        if (ages[i]>=x)
        {
            count++;
        }
    }
    cout<<count<<endl;
    
}
return 0;
}