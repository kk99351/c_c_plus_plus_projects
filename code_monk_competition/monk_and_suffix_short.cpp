#include <iostream>
using namespace std;
int main()
{
    string s;
    int tm,k;
    cin>>s>>k;
    int n = s.length();
    int num[n];
    for (int i=0;i<n;i++)
    {
        num[i] = i;
    }
    for (int i =0;i<n;i++)
    {
        for (int j =(i+1);j<n;j++)
        {
            if((s.substr(num[i])).compare(s.substr(num[j]))>0)
            {
                tm = num[j];
                num[j] = num[i];
                num[i] = tm;   
            }
        }
    }
    cout<<s.substr(num[k-1]);
}