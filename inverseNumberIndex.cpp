#include <iostream>
#include <math.h>
using namespace std;
int main()
{
  int n;
  cin >> n;
  int num = 0;
  int p;
  int count = 0;
  while (n>0)
  {
    int rem = n % 10;
    count++;
    p = (rem - 1);
    n = n / 10;
    num = num + count * (round(pow(10, p)));
  }
  cout << num;
}