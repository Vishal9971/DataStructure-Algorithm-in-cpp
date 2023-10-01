#include <iostream>
// #include <math.h>
#include <cmath>
using namespace std;
int main()
{
  int t;
  cin >> t;
  while(t>0){
    int n;
    cin >> n;
    int sum = 0;
    int p = 0;
    while (n > 0)
    {
      int rem = n % 10;
      n = n / 10;
      sum += rem * round(pow(2, p));
      p++;
    }
    cout << sum;
    n--;
  }

}