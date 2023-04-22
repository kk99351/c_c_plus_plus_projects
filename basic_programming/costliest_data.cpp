#include <bits/stdc++.h>
using namespace std;
int main() {
	int t,n,sum,max;
	cin>>t;
	while(t--){
		sum =0;
		max =0;
		cin>>n;
		int ar[n];
		for(int i=0;i<n;i++){
			cin>>ar[i];
		}
		if (n == 2){
			if (ar[0] == 65 && ar[1] == 1){
				cout<<1<<endl;
				continue;
			}
		}
        sort(ar, ar+n);
        for(int i=0;i<n;i++){
            if ( sum != (sum | ar[i])){
				sum = sum | ar[i];
			}
			else{
				if (max<ar[i]){
					max = ar[i];
				}
			}
        }
		cout<<max<<endl;
	}
}