#include <bits/stdc++.h>
using namespace std;
void answer()
{
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    int count=1,final=0;
    for (int i = 0; i < n; i++)
    {
        if(arr[i]==arr[i+1]){
            count++;
        }
        else{
            final=max(final,count);
            count=1;
        }
    }
    cout<<n-final<<endl;
    
    
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