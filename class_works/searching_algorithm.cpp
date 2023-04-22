#include <iostream>
using namespace std;
void display(int arr[],int n){
    cout<<"array is: ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<"_";
    }
    cout<<endl;
}
void initializer(int *arr,int length){
    cout<<"input is: ";
    int tmp;
    for(int i=0; i<length; i++){
        cin>>tmp;
        arr[i] = tmp;
    }
}
//linear search
int linear_search(int ar[],int len,int x){
    for (int i=0;i<len;i++){
        if (ar[i]==x){
            return i;
        }
    }
    return -1;
}
//binay_search
int binary_search(int ar[],int len,int x){
    int low =0;
    int high = len-1;
    while(low<=high)
    {
        int mid = low+(high-low)/2;
        if (ar[mid]>x){
            high = mid-1;
        }
        else if(ar[mid]<x){
            low = mid+1;
        }
        else{
            return mid;
        }
    }
    return -1;

}
int main(){
    int len,x;
    cout<<"length: ";cin>>len;
    cout<<"find: ";cin>>x;
    int arr[len];
    initializer(arr,len);
    display(arr,len);
    cout<<"position is: "<<binary_search(arr,len,x);
}