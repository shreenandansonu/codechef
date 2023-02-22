#include <iostream>
using namespace std;

void answer()
{   
    
    cout<<"hii"<<endl;
    int n;
    string arr[n],newstr="0000000000";
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        for(int j=0;j<10;j++){
            newstr[j]^=arr[i][j];
        }
        
    }
    int count;
    for(int k=0;k<10;k++){
        count+=newstr[k];
    }
    cout<<count;
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