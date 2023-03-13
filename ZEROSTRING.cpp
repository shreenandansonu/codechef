#include <bits/stdc++.h>
using namespace std;
void answer()
{
    int N;
    cin>>N;
    string s;
    cin>>s;
    int one_count=0,zero_count=0;
    for (int i = 0; i < N; i++)
    {
        if(s[i]=='1'){
            one_count++;
        }
        else{
            zero_count++;
        }
    }
    if(zero_count>=one_count){
        cout<<one_count<<endl;
    }
    else{
        cout<<zero_count+1<<endl;
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