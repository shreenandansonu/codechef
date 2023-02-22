#include <iostream>
using namespace std;
void answer()
{
    int N, M, O=0;
    cin >> N >> M;
    string A, B, C;
    cin >> A >> B;
    C = A + B;
    for (int i = 0; i < (M + N); i++)
    {

        O ^= C[i];
    }
    cout<<O<<endl;
    if ((O<123 and O>96)or O==0){
cout<<"YES"<<endl;
    }
else{
cout<<"NO"<<endl;
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