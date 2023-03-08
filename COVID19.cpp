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
    int at_least=INT_MAX,at_max=INT_MIN,count=1;
    int dist[n];
    for (int i = 0; i < n-1; i++)
    {
        dist[i]=arr[i+1]-arr[i];
        if(dist[i]<=2){
            count++;
        }
        else{
            at_least=min(at_least,count);
            at_max=max(at_max,count);
            count=1;
        }
    }
    
    cout<<at_least<<" "<<at_max<<endl;
       
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