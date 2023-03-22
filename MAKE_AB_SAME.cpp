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
    int A[n],B[n],AO=0;//,AZ=0,BO=0,BZ=0;
    for (int i = 0; i < n; i++)
    {
        cin>>A[i];
        if(A[i]==1) AO++;
        //else AZ++;
    }
    for (int i = 0; i < n; i++)
    {
        cin>>B[i];
        //if(B[i]==1) BO++;
       // else BZ++;
    }
    if(A[0]==B[0] & A[n-1]==B[n-1]){
        bool posible=true,same=true;
        for (int i = 1; i < n-1; i++)
        {   
            if(A[i]!=B[i]) same=false;
            if(A[i]==1 & B[i]==0){
                posible=false;
                break;
            }
        }
        if((posible==true & AO>=1) or same==true){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    else cout<<"NO"<<endl;
    
    
}
return 0;
}