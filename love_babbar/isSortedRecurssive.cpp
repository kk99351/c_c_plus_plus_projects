#include <iostream>
using namespace std;

void isSorted(int *arr, int size){
    if (size == 0 || size == 1){
        return true;
    }
    if (arr[0] > arr[1]){
        return false;
    }
    bool remainPart = isSorted(arr+1,size-1);
    return remainPart;
}

int main(){
    int arr[5] = {2,4,6,8};
    int size = 5;
    bool ans = isSorted(arr, size);
    if (ans){
        cout<<"sorted"<<endl;
    }
    else{
        cout<<"not sorted"<<endl;
    }
}