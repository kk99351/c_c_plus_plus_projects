#include <iostream>
using namespace std;
int main()
{
	short int t,i,j,k,l,n,count;
	cin>>t;
	while (t--)
	{
		count =0;
		cin>>n;
		short int mat[n][n];
		for (i=0;i<n;i++)
		{
			for (j=0;j<n;j++)
			{
				cin>>mat[i][j];
			}
		}
		for (i=0;i<n;i++)
		{
			for (j=0;j<n;j++)
			{
				for (k=i;k<n;k++)
				{
					for (l=j;l<n;l++)
					{
						if (mat[i][j]>mat[k][l])
						count++;
					}
				}
			}
		}
		cout<<count<<endl;
	}
}