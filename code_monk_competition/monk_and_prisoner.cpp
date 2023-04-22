#include <iostream>
#include <stack>
using namespace std;
stack <long long> st;
long long ar[1000001],yar[1000001],xar[1000001];
int main(){
    int n;
    cin>>n;
    for (int i=1;i<=n;i++){
        cin>>ar[i];
    }
    for (int i=1;i<=n;i++){
        if (st.empty() || ar[st.top()] >= ar[i]){
            st.push(i);
        }
        else{
            while(!st.empty() && ar[st.top()] < ar[i]){
                xar[st.top()] = i;
                st.pop();
            }
            st.push(i);
        }
    }
    while(!st.empty()){
        xar[st.top()] = -1;
        st.pop();
    }
    for( int i= n;i>0;i--){
        if (st.empty() || ar[st.top()] >= ar[i]){
            st.push(i);
        }
        else{
            while(!st.empty() && ar[st.top()] < ar[i]){
                yar[st.top()] = i;
                st.pop();
            }
            st.push(i);
        }
    }
    while(!st.empty()){
        yar[st.top()] = -1;
        st.pop();
    }
    for(int i=1;i<=n;i++){
        cout<<yar[i]+xar[i]<<" ";
    }
}