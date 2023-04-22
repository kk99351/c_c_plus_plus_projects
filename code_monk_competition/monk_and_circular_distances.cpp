#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,x,y,q;
    long long r;
    cin>>n;
    long long ar[n];
    for (int i=0;i<n;i++){
        cin>>x>>y;
        ar[i] = x*x+y*y;
    }
    sort(ar, ar+n);
    cin>>q;
    for(int i=0;i<q;i++){
        cin>>r;
        r = r*r;
        cout<<(upper_bound(ar,ar+n,r)-ar)<<endl;
    }
}
