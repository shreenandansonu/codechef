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
    int sum=0,arr[n],zero;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
        sum+=arr[i];
    }
    zero=n-sum;
    if(n%2!=0 || sum==0 || (sum==n && n==2)){
        cout<<-1<<endl;
    }
    else if(zero==sum){
        cout<<0<<endl;
    }
    else{
        if(zero>sum){
            cout<<(zero-sum)/2<<endl;
        }
        else {
            int diff=sum-zero;
            int rem=diff%4;
            int ans=0;
            if(rem==2){
                ans+=2;
            }
            ans+=diff/4;
            cout<<ans<<endl;
        }
        
    }

    
}
return 0;
}
/*
8
8
1 1 1 0 0 0 0 0
8
0 0 0 1 1 1 1 1
8
0 0 0 0 1 1 1 1
8
1 1 1 1 1 1 1 1
8
0 0 0 0 0 0 0 0
9
1 1 1 1 1 1 1 1 1
10
0 0 0 1 1 1 1 1 1 1
10
1 1 1 1 1 1 1 1 1 1

*/