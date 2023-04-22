#include <iostream>
#include <math.h>
using namespace std;
int main() {
	int t,n,m;
	int btar[16] = {0};
	int sum;
	char c;
	cin>>t;
	int i =15;
	while(t--){
		sum =0;
        i=15;
		cin>>n>>m>>c;
		while(n){
			btar[i] = n%2; 
			i--;
			n = n/2;
		}
		if (c == 'L'){
			for (i=m;i<16;i++){
				sum += pow(2,15-i+m)*btar[i];
				btar[i] = 0;
			}
			for (i=0;i<m;i++){
				sum += pow(2,m-i-1)*btar[i];
				btar[i] = 0;
			}
		}
		else{
			for (i=0;i<16-m;i++){
				sum += pow(2,15-i-m)*btar[i];
				btar[i] = 0;
			}
			for (i=16-m;i<16;i++){
				sum += pow(2,15-((i+m-1)%15))*btar[i];
				btar[i] = 0;
			}
		}
		cout<<sum<<endl;
	}
}