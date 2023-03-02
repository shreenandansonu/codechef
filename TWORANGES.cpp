#include <bits/stdc++.h>
using namespace std;
void answer()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    if (a>c){
        int x,y;
        x=a;a=c;c=x;
        y=b;b=d;d=y;
    }
    if(b>d){
        cout<<b-a+1<<endl;
    }
    else{
        if(b>=c){
            cout<<(d-a+1)<<endl;
        }
        else{
            cout<<(d+b-a-c+2)<<endl;
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