#include <iostream>
using namespace std;

int main(){
int t;
cin >> t;
while (t--)
{
    int N,Y,totalOr=0;
    cin>>N>>Y;
    int array[N]={};
    for(int j=0;j<N;j++){
        cin>>array[j];
        totalOr|=array[j];
    }
    int X=totalOr^Y;
    if ((X|totalOr)==Y){
        cout<<X<<endl;
    }   
    else{
        cout<<-1<<endl;
    }
}
return 0;
}