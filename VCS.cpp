#include <bits/stdc++.h>
using namespace std;
void answer()
{
    int n,m,k;
    cin>>n>>m>>k;
    int ignored[m],tracked[k];
    set <int> unique;
    for (int i = 0; i < m; i++)
    {
        cin>>ignored[i];
        unique.insert(ignored[i]);
    }
    for (int j = 0; j < k; j++)
    {
        cin>>tracked[j];
        unique.insert(tracked[j]);
    }
    int x=unique.size();
    cout<<(m+k-x)<<" "<<(n-x)<<endl;
    
    
    
}
int main()
{
int t;
cin >> t;
for (int i = 0; i < t; i++)
{
answer();
}
return 0;
}