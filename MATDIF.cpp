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
                if(i%2==0)cout<<count-n<<" ";
                else cout<<count+n<<" ";
                count++;
            }
            cout<<endl;
            
    }
    
}
return 0;
}