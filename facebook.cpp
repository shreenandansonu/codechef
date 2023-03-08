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
    int winner=0;
    for (int i = 1; i < n; i++)
    {
        if(A[i]>A[winner]){
            winner=i;
        }
        else if(A[i]==A[winner]){
            if(B[i]>B[winner]){
                winner=i;
            }
        }
    }
    cout<<winner+1<<endl; 
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