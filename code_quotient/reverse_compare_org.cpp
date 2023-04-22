#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main()
{
  int n,rn=0,tm;
  cin>>n;
  tm=n;
  while(tm){
    rn = rn*10+tm%10;
    tm=tm/10;
  }
  if (rn==n){
    cout<<"Equal";
  }
  else{
    cout<<"Not Equal";
  }
}