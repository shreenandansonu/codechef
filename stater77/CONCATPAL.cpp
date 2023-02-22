#include <iostream>
using namespace std;
void answer()
{
    int N, M, O, P,S=0, count = 0;
    cin >> N >> M;
    string A, B;
    cin >> A >> B;
    O = min(N, M);
    P = max(N, M);
    if (M > N)
    {
        string temp = A;
        A = B;
        B = temp;
    }

    for (int i = 0; i < O; i++)
    {
        for (int j = 0; j < P; j++)
        {
            if (B[i] == A[j])
            {
                count += 1;
                B[i] = 0;
                A[j] = 0;
            }
        }
    }
    //cout << A << " " << B << endl;
    if (count != O)
    {
        cout << "NO" << endl;
    }
    else
    {
        for (int z = 0; z < P; z++)
        {
            S ^= A[z];
           // cout<<S<<endl;
        }
        if((S<123 and S>96) or S==0){
            cout<<"YES"<<endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
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

5
4 5
abcd abcde
5 4
bcdea abcd
4 5
abcd xyzab
4 6
abcd abcdef 
4 7
abcd abcdefg 
*/