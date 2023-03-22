#include <bits/stdc++.h>
#include <cmath>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        int y=a%b;
        int m=max(b,d),n=min(b,d);
        if(b==1 or d==1){
            cout<<m<<endl;
        }
        else{
            if(n-y>=2){
                cout<<1<<endl;
            }
            else{
                cout<<(std::__gcd(b,d))-1<<endl;
            }
        }

    }
    return 0;
}