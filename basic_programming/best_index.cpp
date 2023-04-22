#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int ar[n+1];
    long long max = 0;
    long long sumar[n+1],sum=0;
    for(int i=1;i<n+1;i++){
        cin>>ar[i];
        sum += ar[i];
        sumar[i] = sum;
    }
    sumar[0] = 0;
    for(int i=1;i<n+1;i++){
        int count = n-i+1;
        int acc = 0;
        for(int j=1;count>0;j++){
            count = count-j;
            acc = acc + j;
            if (count < 0){
                acc = acc - j;
                break;   
            }
            if (count == 0){
                break;
            }
        }
        if (i==1){
            max = sumar[acc+i-1]-sumar[i-1];
        }
        else if (max<(sumar[acc+i-1]-sumar[i-1])){
            max = sumar[acc+i-1]-sumar[i-1];
        }
    }
    cout<<max<<endl;
}