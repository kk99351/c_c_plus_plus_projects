#include <iostream>
using namespace std;
int main() {
	int t,n;
	cin>>t;
	while(t--){
		cin>>n;
		int ar[n],count=0,min=0,xorr=0;
		for(int i=0;i<n;i++){
			cin>>ar[i];
		}
		for(int i=0;i<n;i++)
		 for(int j=i+1;j<n;j++){
			 min = ar[i] > ar[j]? ar[j]:ar[i];
             xorr = ar[i]^ar[j];
			 if (min <= xorr){
				 count++;
			 }
		 }
         cout<<count<<endl;
	}	
}