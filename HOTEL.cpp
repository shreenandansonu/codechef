#include <bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin >> t;
while(t--)
{
    int N;
    cin>>N;
    int arr[1002]={0},temp;
    //arrival
    for (int i = 0; i < N; i++)
    {
       cin>>temp;
       arr[temp]++;
    }
    //departure
    for (int i = 0; i < N; i++)
    {
       cin>>temp;
       arr[temp]--;
    }
    //counting the number of people present simultaniously as time passes and recoring the highest number
    int maxi=INT_MIN;
    for (int i = 2; i < 1002; i++)
    {
        arr[i]+=arr[i-1];
        maxi=max(maxi,arr[i]);
    }
    cout<<maxi<<endl;
        
    
}
return 0;
}