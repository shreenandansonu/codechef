#include <bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin >> t;
while(t--)
{
    int n;
    cin>>n;
    int b[n] ,q=0;
    for (int i = 0; i < n; i++)
    {
        cin>>b[i];
        if (b[i]<0) q+=i+1;
    }
    cout<<abs(((n*(n+1))/2)-(2*q))<<endl;
}
}






/*#include <bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin >> t;
while(t--)
{
    int n;
    cin>>n;
    int b[n],c[n],p=0,q=0;
    for (int i = 0; i < n; i++)
    {
        cin>>b[i];
        c[i]=b[i]*(pow(2,i));
    }
    for (int  i = 0; i <= n; i++)
    {
        for (int j = i; j < n; j++)
        {
            int sum=0;
            for (int k = i; k<=j ; k++)
            {
                //cout<<c[k]<<" ";
                sum+=c[k];
            }
            //cout<<sum<<endl;
            if (sum>0) p++;
            else q++;            
        }
        
    }
    cout<<abs(p-q)<<endl;   

}
return 0;
}*/