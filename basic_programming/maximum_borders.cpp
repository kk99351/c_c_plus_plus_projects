#include <iostream>
using namespace std;
int main(){
    int t,m,n,mb = 0,b;
    char tm;
    cin>>t;
    while(t--){
        mb = 0;
        cin>>m>>n;
        for(int i=0;i<m;i++){
            b =0;
            for(int j=0;j<n;j++){
                cin>>tm;
                if (tm == '#'){
                    b++;
                }
                else{
                    if (mb<b){
                        mb = b;
                        b =0;
                    }
                }
            }
        }
        cout<<mb<<endl;
    }
}