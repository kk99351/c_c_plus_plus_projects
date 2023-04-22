#include<iostream>
#include<cstdio>
#include<math.h>
#include<iomanip>

using namespace std;

int main()
{
    // Write your code here
  	float pa,r,t,cia;
  	cin>>pa>>r>>t;
  	cia = pa*pow((1+r*0.01),t);
  	cout<< setprecision(1)<<fixed<< cia;
    return 0;
}
