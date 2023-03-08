#include <bits/stdc++.h>
using namespace std;
void answer()
{
    int H,X,Y;
    cin>>H>>X>>Y;
    int s=ceil((float(H-Y))/X);
    cout<<s+1<<endl;
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