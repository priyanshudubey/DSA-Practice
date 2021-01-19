#include<bits/stdc++.h>
using namespace std;
bool isPrime(int n)
{
    bool isPrime = true;
    for(int i=2;i<=int(sqrt(n));i++){
        if(n%i==0){
            isPrime = false;
            break;
        }
    }
    if(isPrime && n!=1)
    return true;
    else
    return false;
}
int exactly3Divisors(int N)
{
    int count = 0;
    for(int i=2;i*i<=N;i++){
        if(isPrime(int(i))){
            count++;
        }
    }
    return count;
}
int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("op.txt","w",stdout);
	#endif
	int a;
	cin>>a;
	cout<<exactly3Divisors(a);
	return 0;
}