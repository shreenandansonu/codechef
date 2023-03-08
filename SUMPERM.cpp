#include <bits/stdc++.h>
using namespace std;
void answer()
{
    int n;
    cin>>n;
    int arr[n];
    if(n%2==0){
        for (int i = 0; i < n; i+=2)
        {
            arr[i]=n-i-1;
        }
        for (int j = 1; j < n; j+=2)
        {
            arr[j]=n-j+1;
        }    
        for (int k = 0; k < n; k++)
        {
            cout<<arr[k]<<" ";
        }     
    }   
    else{
        cout<<-1<<endl;
    }
    cout<<endl;
    
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