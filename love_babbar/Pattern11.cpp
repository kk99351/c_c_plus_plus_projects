#include <bits/stdc++.h>
using namespace std;
int main(){
    int i=1,j=1,n;
    cin>>n;
    while(i<=n){
        j=1;
        char ch = 'D'-i+1;
        while(j<=i){
            cout<<ch<<" ";
            ch++;
            j++;
        }
        cout<<endl;
        i++;
    }
}