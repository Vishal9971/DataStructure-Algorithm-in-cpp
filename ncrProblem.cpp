#include <iostream>
using namespace std;

int fact(int n){
  int ans = 1;
  for (int i = 1; i <=n;i++){
    ans *= i;
  }
  return ans;
}
void ncr(){
  int n;
  cin >> n;
  int r;
  cin >> r;
  int nr = n - r;
  int a=fact(n);
  int b = fact(r);
  int c = fact(n - r);
  int ans = a / (b * c);
  cout << ans << endl;
}


int main(){
  ncr();
}