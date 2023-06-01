#include <bits/stdc++.h> 
void reverseArray(vector<int> &arr , int m)
{
	int initial = m+1;
	int finall = ((arr.size()-m-1)/2+m);
	for(int i=initial;i<=finall;i++){
		swap(arr[i], arr[arr.size()+1-(i-m+1)]);
	}
}
