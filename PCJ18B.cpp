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
    if(N%2==0){
        N/=2;
        cout<<(((2*N)*(N+1)*(2*N+1))/3)<<endl;
    }
    else{
        N/=2;
        N++;
        cout<<((N*(2*N+1)*(2*N-1))/3)<<endl;
    }

}
return 0;
}