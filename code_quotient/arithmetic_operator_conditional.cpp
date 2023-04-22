#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main()
{
  int a,b;
  char c;
  cin>>a>>b>>c;
  if (c=='+'){
    cout<<(a+b);
  }else if (c=='-'){
    cout<<(a-b);
  }else if (c=='%'){
    cout<<(a%b);
  }else if (c=='/'){
    cout<<(a/b);
  }else if (c=='*'){
    cout<<(a*b);
  }
  else{
    cout<<"Enter valid arithmetic operator";
  }
   return 0;
}