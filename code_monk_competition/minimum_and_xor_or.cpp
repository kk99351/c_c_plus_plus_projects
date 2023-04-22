#include <iostream>
using namespace std;
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
    }
}
int main(int argc, char *argv[])
{
	int t,n,min,temp;
	cin>>t;
	while(t--){
		cin>>n;
		int arr[n];
		for(int i=0;i<n;i++){
			cin>>arr[i];
		}
		merge_sort(arr,0,n);
		min = arr[0]^arr[1];
		for(int i=1;i<n-1;i++){
			temp=arr[i]^arr[i+1];
			if (min>temp){
				min = temp;
			}
		}
		cout<<min<<endl;
	}
}