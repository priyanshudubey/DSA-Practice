//Count the number of digits

#include <iostream>
using namespace std;
int digitCount(int n){
  int re = 0;
  while(n>0){
    n=n/10;
    re++;
  }
  //cout<<re;
  return re;
}
int main() {
  int n;
  cin>>n;
  cout<<digitCount(n);
  return 0;
  //digitCount();
}