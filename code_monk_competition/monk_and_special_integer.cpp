#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,ans =-1;
    long long x;
    cin>>n>>x;
    long long ar[n];
    for(int i = 0;i<n;i++){
        cin>>ar[i];
    }
    int low = 0,high = n,mid;
    long long s;
    while(low<=high){
        mid = (low + high)/2;
        s = 0;
        for(int i =0;i<mid;i++){
            s += ar[i];
            if (s>x){
                break;
            }
        }
        if (s<=x){
            for(int i=mid;i<n;i++){
                s -= ar[i-mid];
                s += ar[i];
                if (s>x){
                    break;
                } 
            }
        }
        if (s>x){
            high = mid-1;
        }
        else{
            ans = mid;
            low = mid+1;
        }
    }
    cout<<ans<<endl;
}