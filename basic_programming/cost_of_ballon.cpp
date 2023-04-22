#include <iostream>
using namespace std;
int main(){
    int t,cg,cp,n,sum1,sum2,ar[2],tmp;
    cin>>t;
    while(t--){
        ar[0] = 0;
        ar[1] = 0;
        sum1 = 0;
        cin>>cg>>cp>>n;
        while(n--){
            cin>>tmp;
            ar[0] += tmp;
            cin>>tmp;
            ar[1] += tmp;
        }
        sum1 = cg*ar[0] + cp*ar[1];
        sum2 = cg*ar[1] + cp*ar[0];
        if (sum1 < sum2){
            cout<<sum1<<endl;
        }
        else{
            cout<<sum2<<endl;
        }
    }
}