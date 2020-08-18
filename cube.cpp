#include <bits/stdc++.h>
using namespace std;

int factorial(int n) 
{  
    return (n==1 || n==0) ? 1: n * factorial(n - 1);  
}

int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	unsigned long int l,h;
	int k,n=0,even=0,odd=0,c=0,i=0,x=0,y=0;
	cin>>l>>h;
	cin>>k;
	n = (h-l+1);
	if(n%2==0){
		even=n/2+1;
		even=n/2;
	}
	else{
		if(l%2 || h%2){
			odd=n/2+1;
			even=n-odd;
		}
		else{
			odd=n/2;
			even=n-odd;
		}
	}
	while(i<=k){
		x = ((pow(even,(k-i)))*(pow(odd,i)))*factorial(k);
		y = factorial(i)*factorial(k-i);
		x=x/y;
		c+=x;
		i+=2;
	}
	cout<<c;
	return 0;
}
