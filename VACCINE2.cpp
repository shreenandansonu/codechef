#include <bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin >> t;
while(t--)
{
    int n,d;
    cin>>n>>d;
    int age[n]={0},count=0;
    for (int i = 0; i < n; i++)
    {
        cin>>age[i];
        if(age[i]>=80 || age[i]<=9){
            count++;
        }
    }
    int days=(ceil(double(count)/d)+ceil(double(n-count)/d));
    cout<<days<<endl;   

       
}
return 0;
}