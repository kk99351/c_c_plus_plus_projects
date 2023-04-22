#include <bits/stdc++.h>
using namespace std;
int main(){
    int t,n,min,max,freq;
    cin>>t;
    while(t--){
        cin>>n;
        int ar[n];
        for(int i=0;i<n;i++){
            cin>>ar[i];
        }
        sort(ar,ar + n);
        min = n;
        max = 0;
        freq = 1;
        for(int i=0;i<n-1;i++){
            if (ar[i] == ar[i+1]){
                freq++;
            }
            else{
            if (freq>max){
                max = freq;
            }
            if (freq<min){
                min = freq;
            }
                freq = 1;
            }
        }
        if (freq>max){
            max = freq;
        }
        if (freq<min){
            min = freq;
        }
        if (max-min){
            cout<<(max-min)<<endl;
        }
        else{
            cout<<-1<<endl;
        }
    }
}