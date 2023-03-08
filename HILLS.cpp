#include <bits/stdc++.h>
using namespace std;
void answer()
{
    int N,U,D;
    cin>>N>>U>>D;
    int height[N];
    for (int i = 0; i < N; i++)
    {
        cin>>height[i];
    }
    int count=1,parr=1;
    for (int i = 0; i < N-1; i++)
    {
        if(height[i]>=height[i+1] and height[i]-height[i+1]<=D){
            count++;
        }
        else if(height[i]<height[i+1] and height[i+1]-height[i]<=U){
            count++;
        }
        else if(height[i]>height[i+1] and height[i]-height[i+1]>D and parr>0){
            count++;
            parr--;
        }
        else{
            break;
        }
    }  
    cout<<count<<endl;
    
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