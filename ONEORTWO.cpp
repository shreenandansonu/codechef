#include <bits/stdc++.h>
using namespace std;
void answer()
{
    int x,y;
    cin>>x>>y;
    if(x==y){
        if(x%2==0){
            cout<<"CHEFINA"<<endl;
        }
        else{
            cout<<"CHEF"<<endl;
        }
    }
    else if(x>y){
        if(y%2!=0){
            cout<<"CHEF"<<endl;
        }
        else{
            if(x-y>=2){
                cout<<"CHEF"<<endl;
            }
            else{
                cout<<"CHEFINA"<<endl;
            }
        }
    }
    else{
        if(x%2==0){
            cout<<"CHEFINA"<<endl;
        }
        else{
            if(y-x>=2){
                cout<<"CHEFINA"<<endl;
            }
            else{
                cout<<"CHEF"<<endl;
            }
        }
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