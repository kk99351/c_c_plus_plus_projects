#include <bits/stdc++.h>
using namespace std;
long long bt_arr[32];
int bt_temp_arr[32];
int fact(int n){
    if (n<=1){
        return 1;
    }
    return n*(n-1);
}
int ncr(int n,int r){
    return fact(n)/(fact(n-r)*fact(r));
}
int main(){
    freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
    int t,count,l,n,i,temp,j=0;
    long long max;
    cin>>t;
    while(t--){
        cin>>n>>l;
        for (i=0;i<n;i++){
            cin>>temp;
            j=0;
            while(temp){
                bt_temp_arr[j] = 0;
                if (temp%2 != 0){
                    bt_temp_arr[j]++;
                }
                j++;
                temp = temp/2;
            }
            for(int k=0;k<j;k++){
                bt_arr[31-k] += bt_temp_arr[k];
            }
        }
        n=0;
        for(i=0;i<32;i++){
            if (bt_arr[i]>0){
                n++;
                bt_arr[i] = bt_arr[i]*pow(2,31-i);
            }
        }
        sort(bt_arr,bt_arr+32, greater<int>());
        if (n<l){
            cout<<-1<<endl;
        }
        if (n==l){
            cout<<1<<endl;
        }
        max = bt_arr[0];
        i=0,j=0,count=0;
        while(i<32 && j<32){
            if (max == bt_arr[j]){
                count++;
            }
            else{
                bt_temp_arr[i] = count;
                max = bt_arr[j];
                count = 1;
                i++;
            }
            j++;
        }
        bt_temp_arr[i] = count;
        j=0; 
        if (n>l){
            while(l-bt_temp_arr[j] > 0){
                l = l - bt_temp_arr[j];
                j++;
            }
            cout<<ncr(bt_temp_arr[j],l)<<endl;
        }
    }
}
