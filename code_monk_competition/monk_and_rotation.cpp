#include <iostream>
using namespace std;
int main(int argc, char *argv[])
{
	short int t;
	cin>>t;
	while (t--)
	{
	int n,k,i;
	cin>>n>>k;
	int ar[n];
	for (i=(k%n);i<n;i++)
	{
		cin>>ar[i];
	}
	for(i=0;i<(k%n);i++)
	{
		cin>>ar[i];
	}
	for(i=0;i<n;i++)
	{
		cout<<ar[i]<<" ";
	}
	cout<<endl;
	}
}