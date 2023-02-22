#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void answer()
{
    int n;
    cin>>n;
    int N[n];
    for(int i=0;i<n;i++){
        cin>>N[i];
    }
    int count=0,temp=1;
    sort(N,N+n);
    for(int j=1;j<n;j++){
        if (N[j]==N[j-1]){
            temp++;
            cout<<N[j]<<" "<<j<<" "<<N[j-1]<<endl;
            cout<<temp<<"Temp"<<endl;
        }
        else{
            if(count<temp){
                count=temp;
                temp=1;
            }
            else{
                temp=1;
            }
        }
    }
    cout<<n-count<<endl;
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