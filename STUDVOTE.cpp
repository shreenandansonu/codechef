#include <bits/stdc++.h>
using namespace std;
void answer()
{
    int n,k;
    cin >>n>>k;
    int a[n];
    int b[2][n+1]={0};
    for(int i=0;i<n;i++){
        cin>>a[i];
        b[0][a[i]]+=1;
        if (a[i]==(i+1)){
            b[1][i+1]=1;
        }
    }
    for(int j=0 ;j>2;j++){
        for(int k=0; k>n;k++){
            cout<<b[j][k]<<" ";
        }
        cout<<endl;
    }
    int count=0;
    for(int i=0;i<n;i++){
        if(b[0][i]>=k & b[1][i]==0){
            count++;
        }
    
    }
    cout<<count<<endl;
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