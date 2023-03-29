#include <bits/stdc++.h>
using namespace std;

void solve()
{

    int a, b, c;
    cin >> a >> b >> c;

    if ((a < b and b < c) or (a > b and b > c))
    {
        if (a < b and b < c)
            cout << 0 << endl;
        else
            for (int i = 1; i < pow(2, 30); i++)
            {
                if (((a ^ i) < (b ^ i)) && ((b ^ i) < (c ^ i)))
                {
                    cout << i << endl;
                    break;
                }
            }
    }
    else{
        cout<<-1<<endl;
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}

/*
#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        int ans = -1;
        if(a>=c|| b<=c || b>=a)
        ans = -1;
         else{
         for(int i=1;i<pow(2,30);i++){
             if(((a^i) <(b^i) )&& ((b^i) < (c^i )))
             {
                 ans = i;
                 break;

             }
         }}

        cout<<ans<<endl;




    }
 // your code goes here
 return 0;
*/