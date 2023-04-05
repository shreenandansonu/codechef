#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        string s;
        cin>>n>>s;
        int count=0;
        for(int i=0;i<n;i++)
        
            if(s[i]=='1')
            {
            count++;
        }
        else 
        {
        break;
        }
        cout<<count<<endl;
    }
	// your code goes here
//	return 0;
}