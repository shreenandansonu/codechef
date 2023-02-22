#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int N,K,sum=0,V;
        cin>>N>>K>>V;
        int intarray[N]={};
        for(int j =0;j<N;j++){
            cin>>intarray[j];
            sum+=intarray[j];
        }
        int summation =V*(N+K);
        int m=summation-sum;
        if(m>0 and m%K==0){
            cout<<(m/K)<<endl;
        }
        else{
            cout<<-1<<endl;
        }

    }
    return 0;
}