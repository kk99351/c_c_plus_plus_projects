#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,m,g,c = 0;
    cin>>n>>m>>g;
    int s[m],t[n],max = 0;
    cin>>t[0];
    for(int i=1;i<n;i++){
        cin>>t[i];
        if (max<t[i]-t[i-1]){
            max = t[i] - t[i-1];
        }
    }
    for(int i =0;i<m;i++){
        cin>>s[i];
        if (max>=s[i]){
            c++;
        }
    }
    cout<<c;
}