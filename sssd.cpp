#include <iostream>
using namespace std;

void solve(){
     int a,b,c;
    cin>>a>>b>>c;
    long long x,low,high,mid;
    x=low=-1; low++;
    high= (1ll<<30)-1;
    while (low<=high){
        mid = (low + high)/2;
        if ((a^mid) < (b^mid) and (b ^ mid) < (c ^ mid)) {
            x = mid;
            break;
        }
        else if ((a ^ mid)<(b ^ mid)) {
            high = mid-1;
        } else {
            low = mid+1;
        }
    }

    cout <<x<< endl;
}

int main() {
    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}