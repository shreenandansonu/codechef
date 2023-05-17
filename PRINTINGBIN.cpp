#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n],b=1;
        cin>>a[0];
        for (int i = 1; i < n; i++)
        {
            cin >> a[i];
            if(a[i]==a[i-1]) b++;
        }
        if (n==b){
            int x=abs(a[n-1]-1);
            for (int i = 0; i < n; i++)
            {
                cout<<x<<" ";
            }
            cout<<endl;            
        }
        
        else{
                    for (int i = 1; i < n; i++)
        {
            cout << a[i] << " ";
        }
        if (a[0] == a[1])
        {
            cout << a[n - 1] << endl;
        }
        else
        {
            cout<<abs(a[n-1]-1)<<endl;
        }
        }
        

    }
    return 0;
}