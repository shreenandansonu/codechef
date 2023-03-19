#include <bits/stdc++.h>
using namespace std;
string solve(){
    string s;
    cin>>s;
    int x=s.size(),count=0;
    for (int i = 1; i < x; i++)
    {
        if(s[i]!=s[i-1]){
            count++;
        }
        if(count>2){
            return "NO";
            break;
        }
        else if(count==2){
            if()
        }
    }
    
}
int main()
{
int t;
cin >> t;
while(t--)
{
    cout<<solve()<<endl;
}
return 0;
}