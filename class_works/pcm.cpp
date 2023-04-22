#include <iostream>
using namespace std;
int main()
{
    int t;
    char ch[4];

    cin>>t;
    while (t--)
    {
        for ( int i=0;i<3;i++)
        {
            cin>>ch[i];
        }
        if (ch[0] == ch[1])
        {
            cout<<"NO"<<endl;
        }
        else if (ch[1] == ch[2])
        {
            cout<<"NO"<<endl;
        }
        else if (ch[0] == ch[2])
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }
    }
}