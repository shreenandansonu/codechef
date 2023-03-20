#include <bits/stdc++.h>
using namespace std;
//This is a function to calculate the factorial of the given number.
int factorial(int n){
    int fact=1;
    for (int i = 1; i < n+1; i++)
    {
        fact*=i;
    }
    return fact;
    
} 
int main()
{
int t;
cin >> t;
while(t--)
{
    int score[11];
    int k;
    for (int i = 0; i < 11; i++)
    {
        cin>>score[i];
    }
    cin>>k;
    sort(score,score+11);
    int x=score[11-k],count1=0,count2=0;
    for (int i = 0; i < 11; i++)
    {
        if(score[i]==x & i>11-k) count1++;
        else if(score[i]==x & i<11-k) count2++;
    }
    int n=count1+count2+1;
    int r=count1+1;
    cout<<factorial(n)/(factorial(r)*factorial(n-r))<<endl;

    
}
return 0;
}