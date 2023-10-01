#include <iostream>
using namespace std;
int main()
{
  int n;
  cin >> n;
  int num = 0;
  int p = 10;
  while(n>0){
    int rem = n % 10;
    n = n / 10;
    num = num*10+rem ;
  }
  cout << num;
}