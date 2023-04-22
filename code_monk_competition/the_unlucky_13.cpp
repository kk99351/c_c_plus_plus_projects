#include <bits/stdc++.h>
#define mod 1000000009
using namespace std;
map <int,long long> mp1;
map <int,long long> mp2;
long long result(long long n){
    if (n<25000){
auto it = mp1.find(n);
    if (mp1.end()!=it){
        return it->second;
    }
    if (n==0){
        mp1.insert({n,1});
        return 1;
    }
    if (n==1){
        mp1.insert({n,10});
        return 10;
    }
    long long temp1 = result(n/2);
    long long temp2 = result(n/2-1);
    long long tm;
    if (n%2){
        long long temp3 = result(n/2+1);
        tm = (temp1*temp3 - temp2*temp1)% mod;
        if (tm<0){
            tm = tm + mod;
        }
        mp1.insert({n,tm});
    }
    else{
        tm = (temp1*temp1 - temp2*temp2)% mod;
        if (tm<0){
            tm = tm + mod;
        }
        mp1.insert({n,tm});
    }
    return tm;
    }
    else{
        auto it = mp2.find(n);
    if (mp2.end()!=it){
        return it->second;
    }
    if (n==0){
        mp2.insert({n,1});
        return 1;
    }
    if (n==1){
        mp2.insert({n,10});
        return 10;
    }
    long long temp1 = result(n/2);
    long long temp2 = result(n/2-1);
    long long tm;
    if (n%2){
        long long temp3 = result(n/2+1);
        tm = (temp1*temp3 - temp2*temp1)% mod;
        if (tm<0){
            tm = tm + mod;
        }
        mp2.insert({n,tm});
    }
    else{
        tm = (temp1*temp1 - temp2*temp2)% mod;
        if (tm<0){
            tm = tm + mod;
        }
        mp2.insert({n,tm});
    }
    return tm;
    }
}
int main(){
    int t;
    long long n;
    cin>>t;
    while(t--){
        cin>>n;
        cout<<result(n)<<endl;
    }
}