#include <iostream>
using namespace std;
int main(){
	int n,i,nn;
    cin>>n;
	char ar[n+1];
	ar[0] = 'x';
	string str = "YES";
	for(int i=1;i<=n;i++){
		cin>>ar[i];
		if (ar[i-1] == ar[i] && ar[i] != '.'){
			str = "NO";
			break;
		}
		if (ar[i] == '.'){
			ar[i] = 'B';
		}
	}
    cout<<str<<endl;
	if (str == "YES"){
		for(int i=1;i<n+1;i++) cout<<ar[i];
	}
}