#include <bits/stdc++.h>
using namespace std;
int gcd(int a,int b){
    if (b==0){
        return a;
    }
    return gcd(b,a%b);
}
int lcmm(int a,int b){
  return (a/gcd(a,b))*b;  
}
int main(){
    int n,t,p,q,pq,a,b,ab;
    cin>>n;
    int arr[n];
    int max = 0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if (arr[i]>max){
            max = arr[i];
        }
    }
    int freq[max+1] = {0},div[max+1] ={0};
    for(int i=0;i<n;i++){
        freq[arr[i]]++;
    }
    for (int i=1;i<max+1;i++){
        for (int j=i;j<max+1;j=j+i){
            div[i] += freq[j];
        }
    }
    cin>>t;
    while(t--){
        cin>>p>>q;
        pq = lcmm(p,q);
        a = p<=max?div[p]:0;
        b = q<=max?div[q]:0;
        ab = pq<=max?div[pq]:0;
        cout<<(a+b-ab)<<endl;
    }
}