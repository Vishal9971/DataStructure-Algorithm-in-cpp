#include <iostream>
using namespace std;
int main()
{
  int divisor;
  int dividend;
  cin>> divisor>>dividend;

  while (divisor>0){
    int rem = dividend % divisor;
    dividend = divisor;
    divisor = rem;
  }
  cout << dividend;

  return 0;
}