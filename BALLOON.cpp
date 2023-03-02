#include <bits/stdc++.h>
using namespace std;
void answer()
{
    int N;
    cin >> N;
    int arra[N];
    for (int i = 0; i < N; i++)
    {
        cin >> arra[i];
    }
    int count = 0, qn = 0;
    for (int i = 0; i < N; i++)
    {
        int a = arra[i];
        //cout<<a<<" questions "<<endl;
        if (a < 8)
        {
            count+=a;
            qn = i+1;
            //cout<<count<<" "<<qn<<" questions "<<endl;
            if (count == 28)
            {
                break;
            }
        }
    }
    cout << qn << endl;
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