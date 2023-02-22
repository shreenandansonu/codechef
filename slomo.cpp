#include <iostream>
using namespace std;
void answer()
{
    int maxT,maxN,sumN;
    cin>>maxT>>maxN>>sumN;
    int count=0;
    for(int j=0;j<maxN;j++){
        if(count<=sumN){
            count+=j;
        }
        else{
            cout<<((j*(j+1)*((2*j)+1))/6)<<endl;
            break;
        }
        }

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