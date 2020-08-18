#include<bits/stdc++.h>
using namespace std;
int power(int x, int n){
	if(n==0)
		return 1;
	int temp = power(x,n/2);
	temp*=temp;
	if(n%2==0)
		return temp;
	else
		return temp*x;
}
int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("op.txt","w",stdout);
	#endif
	int a,b;
	cin>>a>>b;
	cout<<power(a,b);
	return 0;
}