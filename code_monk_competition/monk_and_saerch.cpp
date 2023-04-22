#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,q,x1,x2,c;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	cin>>q;
    sort(a, a + n);
	for(int i=0;i<q;i++){
		c=0;
		cin>>x1;cin>>x2;
		//searching
        if (x1 == 0){
            cout<< n-(lower_bound(a,a + n,x2)-a)<<endl;
        }
        else{
            cout<< n-(upper_bound(a,a + n,x2)-a)<<endl;
        }
	}
}