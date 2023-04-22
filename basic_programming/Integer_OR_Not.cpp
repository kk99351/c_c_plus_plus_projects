#include <iostream>
using namespace std;

int main(){
    int t;
    string N;
    string msg;
    cin>>t;
    while(t--){
        cin>>N;
        msg = "YES";
        for(int i=0;i<N.length();i++){
            if (N[i] == '.'){
                for(int j=i+1;j<N.length();j++){
                    if (j != 0){
                        msg = "NO";
                        break;
                    }
                }
                break;
            }
        }
        cout<<msg<<endl;
    }
}