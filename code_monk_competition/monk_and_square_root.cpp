#include <iostream>
#include <math.h>
using namespace std;
int main(){
    long long int t,n,m,i,x;
    cin>>t;
    while(t--){
        i=0,x=0;
        cin>>n>>m;
        for(i=sqrt(n);i<m/2+1;i++){
            if ((i*i)%m == n){
                cout<<i<<endl;
                x=1;
                break;
            }
        }
        if (x==0){
            cout<<-1<<endl;
        }
    }
}