#include <bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin >> t;
while(t--)
{
    int N,M,K;
    cin>>N>>M>>K;
    int test[N];
    for (int i = 0; i < N; i++)
    {
        cin>>test[i];
    }
    int count=0;
    for (int i = 0; i < N; i++)
    {
        if(test[i]==1){
            count++;
            if(count==N){
                cout<<100<<endl;
            }
        }
        else{
            if(count>=M){
                cout<<K<<endl;
                break;
            }
            else{
                cout<<0<<endl;
                break;
            }
        }
    }
    
    
}
return 0;
}