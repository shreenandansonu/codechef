#include <bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin >> t;
while(t--)
{
 int n,m,k,s=0;
 cin>>n>>m>>k;
 int room[n][m],total=0;
 for (int i = 0; i < n; i++)
 {
    for (int j = 0; j < m; j++)
    {
        cin>>room[i][j];
        total+=room[i][j];
        if(room[i][j]>=k+1) s=1; 
    }
    
 }
 if(total<k+1){
    cout<<-1<<endl;
 }
 else if (s==1){
    cout<<0<<endl;
 }
 else{
    
 }
 

}
return 0;
}