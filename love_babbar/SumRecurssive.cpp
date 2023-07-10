#include <iostream>
using namespace std;

int getSum(int *arr, int size){
    if (size == 1){
        return arr[0];
    }
    return getSum(arr+1,size-1)+arr[0];
}

int main(){
    int arr[5] = {2,4,6,8,10};
    int sum = getSum(arr,5);
    cout<<sum;
}