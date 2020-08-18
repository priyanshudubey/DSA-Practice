#include <bits/stdc++.h>
using namespace std;
int gcd(int x, int y){
	if(y==0)
		return x;
	else
		return gcd(y,x%y);
}
int lcm(int x,int y){
	return (x*y)/gcd(x,y);
}

int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("op.txt","w",stdout);
	#endif
	int a,b;
	cin>>a>>b;
	cout<<lcm(a,b);
	return 0;
}