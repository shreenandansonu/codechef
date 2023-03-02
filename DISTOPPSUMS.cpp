#include <bits/stdc++.h>
using namespace std;
void answer()
{
    int N;
    cin>>N;
    for(int i=1;i<(N/2)+1;i++){
        cout<<i<<" ";
    }
    for(int i=N;i>N/2;i--){
        cout<<i<<" ";
    }
    cout<<endl;
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