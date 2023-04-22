#include <bits/stdc++.h>
using namespace std;
int main(){
    int i=1,j,n,count=1;
    cin>>n;
    while(i<=n){
        j=1;
        while(j<=n-i){
            cout<<" ";
            j++;
        }
        j=1;
        while(j<=i){
            cout<<count;
            count++;
            j++;
        }
        cout<<endl;
        i++;
    }
}