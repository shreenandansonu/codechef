#include <iostream>
#include<bits/stdc++.h>
using namespace std;
void answer()
{
    int n,count=1;
    cin>>n;
    int arr[n];
    for(int j=0;j<n;j++){
        cin>>arr[j];
    }
    /*we will arrange the
    array in order and then 
    use loop to check for
    duplicates if found then we 
    will continue in the loop
    or else we will add 1 to count */
    sort(arr, arr+n);
    for(int l=1;l<n;l++){
        if(arr[l]==arr[l-1]){
            continue;
        }
        else{
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