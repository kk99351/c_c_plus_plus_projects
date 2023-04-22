#include<iostream>
#include<cstdio>
#include<cmath>
#include<iomanip>
using namespace std;
int main()
{
  float n,s;
  cin>>n;
   if (n<=1000){
     cout<<setprecision(2)<<fixed<<n;
   }
  else if (n>1000 && n<=5000){
    s = n - n*0.05;
    cout<<setprecision(2)<<fixed<<s;
  }
  else if (n>5000 && n<=10000){
    s = n - n*0.1;
    cout<<setprecision(2)<<fixed<<s;
  }
  else if(n>10000 && n<=30000){
    s = n - n*0.15;
    cout<<setprecision(2)<<fixed<<s;
  }
  else{
    s = n - n*0.17;
    cout<<setprecision(2)<<fixed<<s;
  }
   return 0;
}