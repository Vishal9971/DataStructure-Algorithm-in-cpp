#include <iostream>
using namespace std;
int main()
{
  int n;
  cin >> n;
  int sum = 0;
  int p = 1;
  while(n>0){
    int rem = n % 10;
    n = n / 10;
    sum = sum*10 + rem ;
    // p = p * 10;
  }
  cout << sum;
}
