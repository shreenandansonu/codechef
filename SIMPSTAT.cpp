#include <bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin >> t;
while(t--)
{
    int N,K;
    cin>>N>>K;
    int arr[N];
    for (int i = 0; i < N; i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+N);
    int sum=0;
    for (int i = K; i < N-K; i++)
    {
        sum+=arr[i];
    }
    double ans=0.000000;
    ans+=double(sum)/double(N-(K*2));
    cout<<fixed<<ans<<endl;
    
}
return 0;
}