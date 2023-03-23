#include <bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin >> t;
while(t--)
{
    int n;
    cin>>n;
    int count=1;
    for (int i = 1; i < n+1; i++)
    {
            for (int j = 1; j < n+1; j++)
            {   
                cout<<count<<" ";
                if(count<=(n*n-2)) count+=2;
                else count=2;
                
            }
            cout<<endl;            
    }
}
return 0;
}