#include <bits/stdc++.h>
using namespace std;

int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("op.txt","w",stdout);
	#endif

	int a,b, count=0;
	cin>>a>>b;
	while(a<=b){
		a=a*3;
		b=b*2;
		count++;
	}	
	cout<<count;
	return 0;
}