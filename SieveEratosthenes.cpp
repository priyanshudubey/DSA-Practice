#include<bits/stdc++.h>
using namespace std;
void sieve(int n){
	if(n<=1)
		return;
	bool isPrime[n+1];
	fill(isPrime,isPrime+n+1,true);
	for(int i=2;i*i<=n;i++){
		if(isPrime[i]){
			for(int p=i*i;p<=n;p=i+p)
				isPrime[p]=false;
		}
	}
	for(int i=2;i<=n;i++)
		if(isPrime[i])
			cout<<i<<" ";
}
int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("op.txt","w",stdout);
	#endif
	int x;
	cin>>x;
	sieve(x);
	return 0;
}