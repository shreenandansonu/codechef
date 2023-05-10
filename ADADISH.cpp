#include <bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin >> t;
while(t--)
{
 int n,time=0,diff=0;
 cin>>n;
 int arr[n];
 for (int i = 0; i < n; i++)
 {
    cin>>arr[i];
 }
 sort (arr,arr+n);
 for (int i = n-1; i >=0; i-=2)
 {  
    
    time+=max(arr[i],arr[i-1]);
    diff=(arr[i]-arr[i-1]);
 }
 
    
}
return 0;
}