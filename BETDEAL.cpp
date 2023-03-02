#include <bits/stdc++.h>
using namespace std;
void answer()
{
    int A,B;
    cin>>A>>B;
    int c=100-A;
    int d=200-2*B;
    if(c<d){
        cout<<"FIRST"<<endl;
    }
    else if(d<c){
        cout<<"SECOND"<<endl;
    }
    else{
        cout<<"BOTH"<<endl;
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