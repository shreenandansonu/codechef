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
    int x=N%4;
    switch (x)
    {
    case 0:
        cout<<N<<endl;
        break;
    case 1:
        cout<<N-1<<endl;
        break;
    case 2:
        cout<<N-1<<endl;
        break;
    case 3:
        cout<<N<<endl;
        break;    
    }   
}
return 0;
}