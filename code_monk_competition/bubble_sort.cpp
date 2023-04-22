#include <iostream>
using namespace std;
void swap(int *a,int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
void bubblesort(int str[],int low,int high)
{
    int i,j;
    for (i=low;i<high-1;i++)
    {
        for(j = low;i<high-2;i++)
        {
            if(str[j]<str[j+1])
            {
                swap(str[j],str[j+1]);
            }
        }
    }
}
int main()
{
    int str[100],n;
    n = 10;
    for(int i =0;i<n;i++)
    {
        cin>>str[i];
    }
    bubblesort(str,0,10);
}