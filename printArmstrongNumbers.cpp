#include <iostream>
#include <cmath>
using namespace std;

int counting(int n)
{
  int count = 0;
  while (n > 0)
  {
    int rem = n % 10;
    n = n / 10;
    count++;
  }
  return count;
}

void isArmstrong(int n)
{
  int p = n;
  int count = counting(n);
  int ans = 0;
  n = p;
  while (n > 0)
  {
    int rem = n % 10;
    rem = int(pow(rem, count));
    ans += rem;
    n = n / 10;
  }
  if (ans == p)
  {
    cout << ans << endl;
  }
}

int main()
{
  int N1, N2;
  cin >> N1;
  cin >> N2;
  for (int i = N1; i <= N2; i++)
  {
    isArmstrong(i);
  }
}