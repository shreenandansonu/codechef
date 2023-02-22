#include <iostream>
using namespace std;
int main()
{
    int t, n, p;
    cin >> t;
    while (t--)
    {
        cin >> n;
        p = 2 * n;
        int x=0;
        int count = 0;
        int a[p];
        for (int i = 0; i < p; i++)
        {
            cin >> a[i];
        }

        //our array input ends here
        //running 2 loops to check for match 
        for(int j=0;j<p;j++)
         {
           // cout<<a[j]<<endl;

            for (int k = j; k < p; k++)
            {
                //cout << a[j] << " " << a[k] << endl;
                if (a[j] == a[k])
                    count++;
            }
//cout<<count<< "this" <<endl;
            if (count > 2)
            {
                x=1;
                break;
            }
            else
            count=0;
            
          
           
        }
        if(x==1){
            cout<<"NO"<<endl;
        }
        else
        cout<<"YES"<<endl;
    }
    return 0;
}