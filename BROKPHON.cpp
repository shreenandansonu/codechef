#include <iostream>
using namespace std;
//For each test case, output a single line containing
//an integer corresponding to the number of 
//players that could mishear the message or whisper it wrongly.
void answer()
{
    int n, whispers[n],count=0;
    cin>>n;
    for(int j=0;j<n;j++){
        cin>>whispers[j];
        }
    for (int i = 1; i < n; i++)
    {
        if (whispers[i-1]==whispers[i] and whispers[i]==whispers[i+1]){
            count++;
        }
        
    }
    if(whispers[n-1]==whispers[0]){
        count++;
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

