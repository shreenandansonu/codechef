#include <bits/stdc++.h>
using namespace std;


void answer()
{
   int n;
   cin>>n;
   string str;
   cin>>str;
   int cnt=0;
   for(auto a:str){
       if(a=='1')
       cnt++;
   }
   int count=n-cnt;
   int ans=min(cnt,count);
   if(ans%2!=0){
    cout<<"ZLATAN"<<endl;
       
   }
   else{
    cout<<"RAMOS"<<endl;   
   }
}


int main() {
    
    int t=1;
    cin>>t;
    while(t--)
    {
        answer();
    }
return 0;
}
