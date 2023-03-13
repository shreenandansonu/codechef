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
    int rec[N],lap[10]={0};
    for (int i = 0; i < N; i++)
    {
        cin>>rec[i];
        lap[rec[i]-1]++;
    }
    int lap1[10];
    for (int i = 0; i < 10; i++)
    {
        lap1[i]=lap[i];
    }
    sort(lap,lap+10);    
    int x=lap[9];
    int count=0,lapy;
    for (int i = 0; i < 10; i++)
    {
        if(lap1[i]==x){
            count++;
            lapy=i+1;
        }
    }
    if(count>1){
        cout<<"CONFUSED"<<endl;
    }
    else{
        cout<<lapy<<endl;
    }
}
return 0;
}