#include <iostream>
int ar[100001];
using namespace std;
int main(){
    int t,i;
    cin>>t;
    for (i=0;i<t;i++){
        cin>>ar[i];
    }
    i--;
    ar[i] = ar[i]%10;
    if (ar[i] == 0){
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }
}