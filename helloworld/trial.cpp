#include <iostream>
using namespace std;
int main() {
	int q,n,l,r;
	cin>>n>>q;
	int ar[n],xorr=0,xorr1=0;
	for(int i=0;i<n;i++){
			cin>>ar[i];
			xorr = xorr^ar[i];
		}
	while(q--){
		xorr1=0;
		cin>>l>>r;
		for(int i=l-1;i<r;i++){
			xorr1 = xorr1^ar[i];
		}
		cout<<(xorr^xorr1)<<endl;
	}
}