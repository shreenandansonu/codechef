#include <iostream>
using namespace std;
void answer()
{
    int n, whispers[n],count=0,initial;
    cin>>n;
    for(int j=0;j<n;j++){
        cin>>whispers[j];
        initial=whispers[0];
        if(whispers[j]!=initial){
            count+=1;
        }
    }
    cout<<count<<endl;
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

