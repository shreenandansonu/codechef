#include <bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin >> t;
while(t--)
{
   int X;
   cin>>X;
   int Y[X];
   for (int  i = 0; i < X; i++)
   {
    cin>>Y[i];
   }
   sort(Y,Y+X);
   int count=0,maxi=INT_MIN;
   for (int i = 0; i < X; i++)
   {
    for (int j = i; j < X; j++)
    {
        if(Y[j]-Y[i]<=1){
            count++;
        }
        else{
            maxi=max(maxi,count);
            count=0;
        }
    }
    
   }
    cout<<maxi<<endl;
    
}
return 0;
}