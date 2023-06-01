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
//bubble_sort__O(n^2)
void bubble_sort(int arr[],int n){
    int temp;
    for (int i = 0; i < n-1; i++){
        for (int j = 0; j < n-1-i; j++){
            if (arr[j] > arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}
//selection_sort__O(n^2)
void selection_sort(int arr[],int n){
    int temp;
    for (int i =0; i<n-1; i++){
        int min = i;
        for (int j=i+1; j<n; j++){
            if (arr[min]>arr[j]){
                min = j;
            }
        }
        temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    }
}
//insertion_sort__O(n^2)
void insertion_sort(int arr[],int n){
    for (int i=0; i<n; i++){
        int temp = arr[i];
        int j = i;
        while(j>0 && arr[j-1] > temp){
            arr[j] = arr[j-1];
            j--;
        }
        arr[j] = temp;
    }
}
//merge_sort__O(nlogn)
void merge(int a[],int start,int mid,int end){
    int p = start, q= mid+1;
    int arr[end-start+1],k=0;
    for (int i = start;i<=end;i++){
        if (p>mid){
            arr[k++] = a[q++];
        }
        else if(q>end){
            arr[k++] = a[p++];
        }
        else if(a[p]>a[q]){
            arr[k++] = a[q++];
        }
        else{
            arr[k++] = a[p++];
        }
    }
    for (int p=0;p<k;p++){
        a[start++] = arr[p];
    }
}
void merge_sort(int a[],int start,int end){
    if (start<end){
        int mid = (start+end)/2;
        merge_sort(a,start,mid);
        merge_sort(a,mid+1,end);
        merge(a,start,mid,end);
        display(a,10);
    }
}
//quick_sort_O(n^2)-O(nlogn)
int partition(int arr[],int start,int end){
    int i = start+1;
    int pivot = arr[start];
    for (int j = start+1;j<=end;j++){
        if (pivot>arr[j]){
            swap(arr[i],arr[j]);
            i++;
        }
    }
    swap(arr[i-1],arr[start]);
    return i-1;
}
void quick_sort(int arr[],int start,int end){
    if (start<end){
        int pivot = partition(arr,start,end);
        quick_sort(arr,start,pivot);
        quick_sort(arr,pivot+1,end);
    }
}
//radix_sort_O(nk)
void countsort(int arr[],int n,int place){
    int i,freq[10] = {0};
    int output[n];
    for (i=0;i<n;i++){
        freq[(arr[i]/place)%10]++;
    }
    for (i=1;i<10;i++){
        freq[i] += freq[i-1];
    }
    for (i=n-1;i>=0;i--){
        output[freq[(arr[i]/place)%10]-1] = arr[i];
        freq[(arr[i]/place)%10]--;
    }
    for (i=0;i<n;i++){
        arr[i] = output[i];
    }
}
void radix_sort(int arr[],int n,int maxx){
    int mul = 1;
    while(maxx){
        countsort(arr,n,mul);
        mul *=10;
        maxx/=10;
    }
}
int main(){
    int len;
    cout<<"length: ";cin>>len;
    int arr[len];
    initializer(arr,len);
    display(arr,len);
    quick_sort(arr,0,len-1);
    display(arr,len);
}