#include<iostream>
using namespace std;

void fibonacci(int n){
  int a = 0;
  int b = 1;
  for (int i = 0; i < n; i++){
    int c = a + b;
    cout << a << ' ';
    a = b;
    b=c;
  }
}

 int main(){
  int n;
  cin >> n;
  fibonacci(n);
 }