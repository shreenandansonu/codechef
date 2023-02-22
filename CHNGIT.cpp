#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void answer()
{
    int n,count=1,temp=1;
    cin>>n;
    int arr[n];
    for (int k=0;k<n;k++){
        cin>>arr[k];
    }
    /*
    once we get the array we will sort 
    it and check for duplicacy and the most duplicate 
    number will dominate and wil give least change number

    to find most duplicate we will count any 
    duplicate first and check for other duplicates if
    the other is more then we will change previous 
    */
    sort(arr, arr+n);
    for(int m=1;m<n;m++){
        if (arr[m]==arr[m-1]){
            temp+=1;
            if (count<temp){
                count+=1;
            }
            
        }
        else{
            temp=1;
        }

    }
    cout<<n-count<<endl;

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
/*
6
6
1 5 6 6 5 1
5
1 2 3 4 5
5
1 0 1 0 1
1
1
6
0 0 0 9 9 9
7
1 0 0 1 0 0 1


*/