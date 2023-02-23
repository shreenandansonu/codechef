#include <bits/stdc++.h>
using namespace std;
void answer()
{
    int N,K;
    cin>>N>>K;
    int code[N],free[N];
    for(int i=0;i<N;i++){
        cin>>code[i];
    }
    for(int i=0;i<N;i++){
        cin>>free[i];
    }
    sort(code,code+N);
    sort(free,free+N);
    int Qcount=0,totaltime=0;
    for(int j=0;j<N;j++){
        totaltime+=code[j];
        //cout<<totaltime<<" totaltime "<<endl;
        if (totaltime<=K)
        {
            Qcount++;
            //cout<<Qcount<<" Qcount "<<endl;
        }
        else{
            break;
        }
        totaltime+=free[j];
        if (totaltime<=K)
        {
            //cout<<totaltime<<" totaltime2 "<<endl;
            continue;
            
        }
        else{
            break;
        }
        
    }
    cout<<Qcount<<endl;

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