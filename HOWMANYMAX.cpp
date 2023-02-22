#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void answer()
{

    int n, count=0;
    string subarray;
    cin >> n;
    cin >> subarray;
    //cout<<count<<'a'<<endl;//debugline
    if (subarray[0] == '1')
    {
        count += 1;
        //cout<<count<<'b'<<endl;//debugline
    }
    if (subarray[n-2]== '0')
    {
        count += 1;
        //cout<<count<<'c'<<endl;//debugline
    }
    for (int j = 0; j < (n - 1); j++)
    {  
        if(subarray[j]=='0' and subarray[j+1]=='1'){
            count+=1;
            //cout<<count<<'d'<<endl;//debugline
        }
    }
    cout<<count<<endl;
}
int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        answer();
    }
    return 0;
}
//test cases
/*
9
2
0
2
1
5
1010
5
0101
5
0100
5
1001
5
*/