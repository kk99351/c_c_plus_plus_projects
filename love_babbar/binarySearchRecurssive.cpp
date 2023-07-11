#include <iostream>
using namespace std;

bool binarySearch(int *arr, int s, int e ,int k){
    if (s>e)
        return false;
    
    int mid = s+(e-s)/2;

    if (arr[mid] < k){
        return binarySearch(arr, mid+1, e, k);
    }

    if (arr[mid] > k){
        return binarySearch(arr, s, mid-1, k);
    }

    return true;
}

int main(){
    int arr[5] = {2,4,6,8,10};
    bool isPresent = binarySearch(arr,0,4,6);
    if(isPresent){
        cout<<"Present";
    }
    else{
        cout<<"not Present";
    }
}