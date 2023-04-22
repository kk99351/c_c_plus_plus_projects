#include <iostream>
using namespace std;
int main()
{
    int n,i,z,tar,cn;
    cin>>n;i =n-1;
    char c[n+1],tm;
    cin>>c;
    c[n] = '\0';
    while(c[i]<=c[i-1])
    {
        i--;
    }
    tar = i-1;
    for (z=0;z<=(n-i)/2;z++)
    {
        tm = c[i+z];
        c[i+z] = c[n-z-1];
        c[n-z-1] = tm;
        
        if (c[tar]<c[n-z-1])
        {
            cn = n-z-1;
        }
        else
        {
            break;
        }
        if (c[tar]<c[i+z])
        {
            cn = i+z;
            break;
        }
    }
    tm = c[tar];
    c[tar] = c[cn];
    c[cn] = tm;
}