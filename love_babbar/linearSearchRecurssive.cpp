#include <iostream>
using namespace std;

int linearSearch(int *arr, int size, int element){
    if (size == 0){
        return false;
    }
    if (arr[0] == element){
        return true;
    }
    bool remainPart = linearSearch(arr+1,size-1,element);
    return remainPart;

}

int main(){
    int arr[5] = {2,4,6,8,10};
    bool isPresent = linearSearch(arr,5,6);
    if(isPresent){
        cout<<"Present";
    }
    else{
        cout<<"not Present";
    }
}