#include <iostream>
using namespace std;
int main()
{
    int n,i=0,j;
    cin>>n;
    string *arr = new string[n];
    int nice[n];
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    nice[0] = 0;
    cout<<nice[0]<<endl;
    for(i=1;i<n;i++)
    {
        nice[i] =  0;
        j=i-1;
        while(j>=0)
        {
            if (arr[i].compare(arr[j])>0)
            {
                nice[i]++;
            }
            j--;
        }
        cout<<nice[i]<<endl;
    }
}