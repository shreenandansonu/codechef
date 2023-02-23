#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void answer()
{
    int n,x;
    cin>>n>>x;
    int marks[n];
    for(int j=0;j<n;j++){
        cin>>marks[j];
    }
    sort(marks,marks+n);
    int y= n-x;
   
    cout<<marks[y]-1<<endl;

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