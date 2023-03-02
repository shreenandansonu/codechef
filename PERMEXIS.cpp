#include <bits/stdc++.h>
using namespace std;
void answer()
{
    int N;
    cin>>N;
    int arr[N];
    for(int i=0;i<N; i++){
        cin>>arr[i];
    }
    int count=1;
    sort(arr,arr+N);
    for(int j=1;j<N;j++){
        if(arr[j]-arr[j-1]<=1){
            count++;
            //cout<<count<<" inloop "<<endl;
        }
        else{
            cout<<"NO"<<endl;
            break;
        }
    }
    if (count==N){
        cout<<"YES"<<endl;
    }

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