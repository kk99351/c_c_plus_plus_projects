#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n],b[n],i,min=999999,m=0,temp,steps=0;
    for(i=0;i<n;i++){
        cin>>a[i];
        if (min>a[i]){
            min = a[i];
        }
    }
    for(i=0;i<n;i++){
        cin>>b[i];
    }
    temp = min;
    while(m!=n && min>=0){
        m=0;
        for(i=0;i<n;i++){
            if (a[i] == min){
                m++;
            }
            else{
                a[i] = a[i]-b[i];
                steps++;
                if (a[i]<temp){
                    temp = a[i];
                    m = 0;
                }
            }
        }
        min = temp;
    }
    if (min<0){
        cout<<-1;
    }
    else{
        cout<<steps;
    }
}