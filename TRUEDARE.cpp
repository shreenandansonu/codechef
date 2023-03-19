#include <bits/stdc++.h>
using namespace std;
bool linser(int A,int B,int a[]){
    for (int i = 0; i < A; i++)
    {
        if(a[i]==B){
            return true;
        }
    }
    
    return false;
}
int main()
{
int t;
cin >> t;
while(t--)
{
    int tr,dr,ts,ds;
    int TR[tr],TS[ts],DR[dr],DS[ds];
    cin>>tr;
    for (int i = 0; i < tr; i++)
    {
        cin>>TR[i];
    }
    cin>>dr;
    for (int i = 0; i < dr; i++)
    {
        cin>>DR[i];
    }
    cin>>ts;
    for (int i = 0; i < ts; i++)
    {
        cin>>TS[i];
    }
    cin>>ds;
    for (int i = 0; i < ds; i++)
    {
        cin>>DS[i];
    }    
    if(tr<ts || dr<ds){
        cout<<"no"<<endl;
    }
    else{
        bool flag1=true;
        bool flag2=true;
        for (int i = 0; i < ts; i++)
        {
            int B=TS[i];
            if(linser(tr,B,TR)==false){
                flag1=false;
                break;
            }
        }
        for (int i = 0; i < ts; i++)
        {
            int B=DS[i];
            if(linser(dr,B,DR)==false){
                flag2=false;
                break;
            }
        }
        if(flag1==false || flag2==false){
            cout<<"no"<<endl;
        }
        else{
            cout<<"yes"<<endl;
        }
    }
}
return 0;
}