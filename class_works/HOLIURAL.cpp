#include <iostream>
using namespace std;
int main()
{
    int t,n,k,i,max;
    cin>>t;
    while (t--)
    {
        cin>>n>>k;
        int r[n],d[n];
        for(i=0;i<n;i++)
        {
            cin>>d[i]; 
        }
        for(i=0;i<n;i++)
        {
            cin>>r[i];
        }
        max = r[0]+(d[0]*k);
        for (i=1;i<n;i++)
        {
            if (max>(r[i]+(d[i]*k)))
            {
                max = r[i]+(d[i]*k);
            }
        }
        cout<<max<<endl;
    }
}