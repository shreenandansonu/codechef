
#include <bits/stdc++.h>
using namespace std;
#define int long long
void placementlelo()
{
    int n;
    cin >> n;
    vector<int> A(n);
    multiset<int> s;
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
        s.insert(A[i]);
    }
    sort(A.begin(), A.end());
    vector<int> temp;

    int z = A[n - 1] + A[n - 2];
    temp.push_back(A[n - 1]);
    s.erase(s.find(A[n - 1]));
    while (temp.size() < n)
    {
        auto it = s.lower_bound(z - temp.back());
        if (it == s.begin())
        {
            cout << "NO" << endl;
            return;
        }
        it--;
        temp.push_back(*it);
        s.erase(it);
    }

    cout << "YES" << endl;
}
int32_t main()
{
    

        int t = 1;
    cin >> t;
    while (t--)
    {
        placementlelo();
    }
    return 0;
}
