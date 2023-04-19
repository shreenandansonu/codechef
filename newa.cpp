#include <bits/stdc++.h>
using namespace std;
 
int main()
{
int t = 1;
cin >> t;
while(t--)
{
int n;
cin >> n;
vector<int> a(n);
for (int i = 0; i < n; i++)
cin >> a[i];
 
int answer = INT_MAX;
for (int i = 0; i < n; i++)
{
int maximum = 0;
if (i + 1 < n)
maximum = max(maximum, abs(a[i + 1] - a[i]));
if (i - 1 >= 0)
maximum = max(maximum, abs(a[i - 1] - a[i]));
answer = min(answer, maximum);
}
cout << answer << endl;
}
}