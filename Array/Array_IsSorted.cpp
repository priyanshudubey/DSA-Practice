// It is for non-decreasing order and similar values considered
// example - [10,20,30,30,40,50] is sorted
// emample2 - [100,90,80,70,60,50] is not sorted

#include<bits/stdc++.h>
using namespace std;
bool sorted(int arr[], int n){
	for(int i =1;i<n;i++){
		if(arr[i]<arr[i-1])
			return false;
	}
	return true;
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
	cout<<sorted(arr, n);
	return 0;
}