#include <bits\stdc++.h>
using namespace std;
int smae_or_not(int x,string str)
{
    for (int j = 1; j < x; j++)
    {
        if(str[j]==str[j-1]){
            continue;
        }
        else{
            return -1;
            break;
        }
    }
    return 1;
}
void answer()
{
    string str;
    cin >> str;
    int x = str.length();
    if (x == 1 or x == 2)
    {
        cout << "YES"<<endl;
    }
    else
    {
        if (smae_or_not(x,str)==1){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        answer();
    }
    return 0;
}