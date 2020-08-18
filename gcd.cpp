#include <bits/stdc++.h>
using namespace std;

int gcd(int n, int m){
	if(m==0)
		return n;
	else
		return gcd(m,n%m);
}

int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("op.txt","w",stdout);
	#endif
	int a,b;
	cin>>a>>b;
	cout<<gcd(a,b);
	return 0;
}