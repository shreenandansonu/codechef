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
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    int cnt=1,maxi=INT_MIN;
    for (int i = 1; i < n; i++)
    {
        if(arr[i]==arr[i-1]){
            cnt++;
        }
        else{
            maxi=max(maxi,cnt);
            cnt=1;
        }
        
    }
    maxi=max(maxi,cnt);
    if(maxi<=(ceil(double(n)/2))) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
           
}
return 0;
}