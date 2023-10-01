#include <iostream>
using namespace std;
int main()
{
  int divisor;
  int dividend;
  cin >> divisor >> dividend;
  int a = divisor;
  int b = dividend;
  while (divisor>0)
  {
    int rem = dividend % divisor;
    dividend = divisor;
    divisor = rem;

  }
  int lcm = a * b / dividend;
  cout << lcm;
}