#include<bits/stdc++.h>
using namespace std;

int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("op.txt","w+",stdout);
	#endif
	int n,res=0;
	cin>>n;
	for(int i=5;i<=n;i=i*5)
		res = res+(n/i);
	cout<<res;
	return 0;
}