//Check for palindrome number

#include <iostream>
using namespace std;
bool isPalindrome(int n){
  int re = 0;
  int t = n;
  while(t!=0){
    int temp = t%10;
    re = re*10+temp;
    t=t/10;
  }
  return (re==n);
}
int main() {
  int n;
  cin>>n;
  cout<<isPalindrome(n);
  return 0;;
}
