#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main()
{
  	int n,s=0;
  	cin>>n;
  	while(n){
      s = s*10+n%10;
      n=n/10;
    }
  	cout<<s;
   	return 0;
}