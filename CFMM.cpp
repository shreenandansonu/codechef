#include <bits/stdc++.h>
using namespace std;
void answer()
{
    int ing;cin>>ing;
    string str;
    string total_string;
    for(int i=0;i<ing;i++){
        cin>>str;
        total_string+=str;
    }
    int x=total_string.size();
    int num_arr[6]={0};
    for(int i=0;i<x;i++){
        switch (total_string[i])
        {
        case 'c':
            num_arr[0]++;
            break;
        case 'o':
            num_arr[1]++;
            break;
        case 'd':
            num_arr[2]++;
            break;
        case 'e':
            num_arr[3]++;
            break;
        case 'h':
            num_arr[4]++;
            break;
        case 'f':
            num_arr[5]++;
            break;        
        }
    }
    num_arr[0]/=2;
    num_arr[3]/=2;
    sort(num_arr,num_arr+6);
    cout<<num_arr[0]<<endl;

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