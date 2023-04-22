#include <iostream>
#include <queue>
using namespace std;
int main(){
    int x,n;
    cin>>n>>x;
    int arr[n+1],j=0,max,index;
    queue<int> q1,q2;
    for(int i=1;i<n+1;i++){
        cin>>arr[i];
        q1.push(i);
    }
    for(int i=0;i<x;i++){
        max = -1;
        while(!q1.empty() && j<x){
            if (arr[q1.front()]>max){
                max = arr[q1.front()];
                index = q1.front();
            }
            q2.push(q1.front());
            q1.pop();
            j++;
        }
        cout<<index<<" ";
        while(!q2.empty()){
            if (q2.front() == index){
                q2.pop();   
            }
            else{
                if (arr[q2.front()] >0){
                    arr[q2.front()]--;
                }
                q1.push(q2.front());
                q2.pop();
            }
        }
        j=0;
    }
}