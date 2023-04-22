#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 998244353
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        vector<int> a(n+1), b(m+1);
        int i;
        for(i=1; i<=n;i++){
            cin>>a[i];
        }
        for(i=1; i<=n;i++){
            cin>>b[i];
        }
        vector<int> c(n+1),d(m+1);
        for(i=1;i<=n;i++){
            c[i] = i*a[i]%mod;
        }
        for(i=1;i<=n;i++){
            d[i] = i*b[i]%mod;
        }
        int suma=0,sumb=0,sumc=0,sumd=0;
        for(i =1; i<=n; i++){
            suma += a[i], sumc += c[i], suma %= mod, sumc %= mod;
        }
        for(i =1; i<=m; i++){
            sumb += b[i], sumd += d[i], sumb %= mod, sumd %= mod;
        }
        cout<<(sumc*sumb%mod + suma*sumd%mod)%mod;
        int q;
        cin>>q;
        for(i=1;i<=q;i++){
            int tp,u,v;
            cin>>tp>>u>>v;
            if(tp == 1){
                suma -= a[u];
                sumb -= b[v];
                sumc -= c[u];
                sumd -= d[v];
                int temp = a[u];
                a[u] = b[v];
                b[v] = temp;
                c[u] = u*a[u]%mod;
                d[v] = v*b[v]%mod;
                suma = (suma + a[u])% mod;
                sumb = (sumb + b[v])% mod;
                sumc = (sumc + c[u])% mod;
                sumd = (sumd + d[v])% mod;
            }
            else if(tp == 2){
                sumc -= c[u];
                sumc -= d[v];

                int temp = a[u];
                a[u] = a[v];
                a[v] = temp;
                c[u] = u*a[u]%mod;
                c[v] = v*a[v]%mod;

                sumc = (sumc + c[u])% mod;
                sumc = (sumc + c[v])% mod;
            }
            else{
                sumd -= d[u];
                sumd -= d[v];

                int temp = b[u];
                b[u] = b[v];
                b[v] = temp;
                d[u] = u*b[u]%mod;
                d[v] = v*b[v]%mod;

                sumd = (sumd + d[u])% mod;
                sumd = (sumd + d[v])% mod;
            }
            cout<<" "<< ((sumc*sumb%mod + suma*sumd%mod)%mod + mod)%mod;
        }
        cout<< '\n';
    }
}