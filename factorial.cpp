#include<bits/stdc++.h>
using namespace std;

int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	int n,res = 1;
	cin>>n;
	for (int i=2;i<=n;i++){
		res*=i;
	}
	cout<<res;
	return 0;
}