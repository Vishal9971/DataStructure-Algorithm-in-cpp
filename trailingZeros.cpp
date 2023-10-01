#include<iostream>
using namespace std;

 void trailingZero(int n){
   int ans = 0;
   for (int i = 5; n/i>=1;i*5){
     ans += (n / i);
   }
   cout << ans << endl;
 }

int main(){
   int n;
   cin >> n;
   trailingZero(n);
}