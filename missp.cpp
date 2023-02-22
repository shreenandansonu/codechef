#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,count=0,p;
	    cin>>n;
	    for( int i=0; i<n;i++){
	        cin>>p;
	       count^=p;
	        
	    }
	    cout<<count<<endl;
	}
	return 0;
}
