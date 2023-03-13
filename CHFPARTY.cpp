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
    int arr[N];
    for (int i = 0; i < N; i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+N);
    int count=0;
    for (int i = 0; i < N; i++)
    {
        if(count>=arr[i]){
            count++;
        }
        
    }
    cout<<count<<endl;
    
       
}
return 0;
}