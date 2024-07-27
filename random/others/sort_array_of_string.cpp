#include <bits/stdc++.h>
using namespace std;
bool comparator(string &x, string &y){
    for(int i=0; i<min(x.length(), y.length());i++){
        if (x[i] < y[i]){
            return true;
        }
        else{
            return false;
        }
    }
    return true;
}
void mergeSortHelper(vector<string> &arr, int start, int mid, int end){
    int p = start;
    int q = mid+1;
    int k = 0;
    vector<string> temp(end-start+1);
    for(int i=start;i<=end;i++){
        if (p>mid){
            temp[k++] = arr[q++];
        }
        else if (q>end){
            temp[k++] = arr[p++];
        }
        else if (comparator(arr[p],arr[q]) == true){
            temp[k++] = arr[p++];
        }
        else{
            temp[k++] = arr[q++];
        }
    }

    for(int i=0; i<k; i++){
        arr[start++] = temp[i];
    }
}
void sortArray(vector<string> &arr, int start, int end){
    if (start<end){
        int mid = (start+end)/2;
        sortArray(arr,start,mid);
        sortArray(arr,mid+1,end);
        mergeSortHelper(arr,start,mid,end);
    }
}
int main(){
    vector<string> arr= {"adc", "abc"};
    sortArray(arr,0,1);
    for(int i=0;i<2;i++){
        cout<<arr[i]<<endl;
    }
}
