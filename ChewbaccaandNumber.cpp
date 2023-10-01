#include <iostream>
using namespace std;

void chewbacca(long n)
{
  long ans = 0;
  long p = 1;
  while (n > 0)
  {
    int rem = n % 10;
    if (rem >= 5 && rem != 9)
    {
      rem = 9 - rem;
    }
    rem = rem * p;
    ans += rem;
    n = n / 10;
    p = p * 10;
  }
  cout << ans;
}

int main()
{
  long n;
  cin >> n;
  chewbacca(n);
}