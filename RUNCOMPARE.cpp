#include <bits/stdc++.h>
using namespace std;
void answer()
{
    int n;
    cin>>n;
    int A[n],B[n];
    for (int i = 0; i < n; i++)
    {
        cin>>A[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin>>B[i];
    }
    int count=0;
    for (int i = 0; i < n; i++)
    {
        if(A[i]<B[i] and A[i]*2>=B[i] ){
            count++;
        }
        else if(A[i]>B[i] and A[i]<=B[i]*2){
            count++;
        }
        else if(A[i]==B[i]){
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