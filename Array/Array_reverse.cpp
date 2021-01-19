#include<bits/stdc++.h>
using namespace std;

void reverse(int arr[], int n){
	int high = n-1, low=0;
	while(low<high){
		int temp = arr[low];
		arr[low] = arr[high];
		arr[high] = temp;
		low++;
		high--;
	}
}

int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	int n;
	cin>>n;
	int arr[n];
	for (int i=0;i<n;i++){
		cin>>arr[i];
	}
	reverse(arr, n);
	for(int i=0;i<n;i++)
		cout<<arr[i]<<" ";
	return 0;
}