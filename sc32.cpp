#include <iostream>
using namespace std;
void answer()
{
    int n;
    string arr[n],newstr="0000000000";
    cin>>n;
    for(int j=0;j<n;j++){
        cin>>arr[j];
        for(int k=0;k<10;k++){
            newstr[k]+=arr[j][k];
        }
    }
    int count=0;
    for(int l=0;l<10;l++){
        if(newstr[l]%2!=0){
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