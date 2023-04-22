#include<bits/stdc++.h>
using namespace std;

int solve (int N) {
    int i;
   for(i=1;i<=N;i=i*2){
   }
   return i/2;
}

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin >> T;
    for(int t_i = 0; t_i < T; t_i++)
    {
        int N;
        cin >> N;

        int out_;
        out_ = solve(N);
        cout << out_;
        cout << "\n";
    }
}