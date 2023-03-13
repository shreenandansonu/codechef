#include <bits/stdc++.h>
using namespace std;
void answer()
{
int N;
cin>>N;
int X=log2(N);
int ans= max((pow(2,(X))-pow(2,(X-1))),(N-pow(2,X)+1));
cout<<ans<<endl;

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
