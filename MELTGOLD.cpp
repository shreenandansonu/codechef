#include <bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin >> t;
while(t--)
{
   int x,y;
   cin>>x>>y;
   int d=x-y,min=0;

   while(d>0){
    min++;
    d-=min;
   }
   cout<<min<<endl;

}
return 0;
}