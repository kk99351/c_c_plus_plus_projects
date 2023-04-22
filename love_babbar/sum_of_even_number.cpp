#include <iostream>
using namespace std;

int main(){
    int n;
    int sum = 0;
    cin>>n;
    while(n--){
        if (n%2 == 0){
            sum = sum+n;
        }
    }
    cout<<sum;
}