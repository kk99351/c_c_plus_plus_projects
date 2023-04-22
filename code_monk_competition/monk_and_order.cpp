#include <iostream>
#include <stack>
using namespace std;
int st[10][100000];
int sizze[10],n;
stack <int> ax;
int lower_bound(int i,int low,int high,int key){
    int mid;
    high--;
    while(low<high){
        mid = (low + high)/2;
        if (st[i][mid]>key){
            high = mid;
        }
        else{
            low = mid+1;
        }
    }
    if (st[i][low]>key){
        return low;
    }
    return -1;
}
int ans(){
    int min = ax.top();
    for(int i=1;i<n;i++){
        int ans = lower_bound(i,0,sizze[i],min);
        if (ans ==-1){
            return false;
        }
        else{
            min = st[i][ans];
        }
    }
    return true;
}
int main(){
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        sizze[i] = x;
        for(int j=0;j<x;j++){
            cin>>st[i][j];
        }
    }
    ax.push(st[0][0]);
    for(int i =1;i<sizze[0];i++){
        if (st[0][i]<ax.top()){
            ax.push(st[0][i]);
        }
        else{
            ax.push(ax.top());
        }
    }
    int q;
    cin>>q;
    for(int i=0;i<q;i++){
        int v;
        cin>>v;
        if (v ==1){
            int k,h;
            cin>>k>>h;
            k--;
            st[k][sizze[k]] = h;
            sizze[k]++;
            if (k==0){
                if (h<ax.top()){
                    ax.push(h);
                }
                else{
                    ax.push(ax.top());
                }
            }
        }
        else if(v ==0){
            int k;
            cin>>k;
            k--;
            sizze[k]--;
            if (k==0){
                ax.pop();
            }
        }
        else{
            if (ans()){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
    }
}