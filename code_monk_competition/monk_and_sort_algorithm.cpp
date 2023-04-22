#include <bits/stdc++.h>
#define scl(x) scanf("%lld", &x)
using namespace std;
long long temp1[1000001],temp2[1000001],ar[1000001],arr[1000001];
void merge(int start, int mid,int end){
	int p = start,q = mid+1;
	int k=0;
	for(int i = start;i<=end;i++){
		if (p>mid){
			temp1[k] = arr[q];
			temp2[k++] = ar[q++];
		}
		else if(q>end){
			temp1[k] = arr[p];
			temp2[k++] = ar[p++];
		}
		else if(ar[p]>ar[q]){
			temp1[k] = arr[q];
			temp2[k++] = ar[q++];
		}
		else{
			temp1[k] = arr[p];
			temp2[k++] = ar[p++];
		}
	}
	for(int p=0;p<k;p++){
		arr[start] = temp1[p];
		ar[start++] = temp2[p];
	}
}
void merge_sort(int start,int end){
	if (start<end){
		int mid = (start + end)/2;
		merge_sort(start,mid);
		merge_sort(mid+1,end);
		merge(start,mid,end);
	}
}
int main(){
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int n;
	scanf("%d",&n);
	long long max = 0,c=1;
	for(int i=0;i<n;i++){
		scl(arr[i]);
		if (arr[i]>max){
			max = arr[i];
		}
	}
	while(max/c){
		for(int i=0;i<n;i++){
			ar[i] = (arr[i]/c)%100000;
		}
		merge_sort(0,n-1);
		for(int i=0;i<n;i++){
			printf("%lld ",arr[i]);
		}
		printf("\n");
		c *= 100000;
	}
}