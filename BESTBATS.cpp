#include <bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin >> t;
while(t--)
{
    int score[11];
    for (int i = 0; i < 11; i++)
    {
        cin>>score[i];
    }
    int k;
    cin>>k;
    sort(score,score+11);
    for (int i = 0; i < 11; i++)
    {
        cout<<score[i]<<" ";
    }
    cout<<endl;
    
    int count=1;
    for (int i = 9-k; i >-1; i--)
    {
        if(score[10-k]==score[i]){
            count++;
        }
    }
    cout<<count<<endl;
    int count1=1;
    for(int i=11-k;i<11;i++){
        if(score[10-k]==score[i]){
            count1++;
        }
    }
    cout<<count1<<endl;  

       
}
return 0;
}