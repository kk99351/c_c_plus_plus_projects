#include <iostream>
using namespace std;
int main()
{
    long long int t,n,k,i,p,ds;
    string str,str1;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        cin>>str;
        str1 = "";
        p = -1;
        ds = 0;
        for (i=0;i<n;i++)
        {
            if (str1.compare(str)<0)
            {
                str1 = str;
                ds = i;
            }
            else if (str1.compare(str) == 0)
            {
                p = i-ds;
                break;
            }
            str = str.substr(1) + str[0];
        }
        if (p == -1)
        {
            cout<<(ds+(k-1)*n)<<endl;
        }
        else
        {
            cout<<(ds+(k-1)*p)<<endl;
        }
    }
}