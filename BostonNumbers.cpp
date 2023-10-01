#include <iostream>
using namespace std;
int sumDigits(int n)
{
  int sum = 0;
  while (n > 0)
  {
    int rem = n % 10;
    n = n / 10;
    sum += rem;
  }
  cout << sum << endl;
  return sum;
}
int sumFactorization(int n)
{
  int sum = 0;
  for (int i = 2; ; i++)
  {
    while (n % i == 0)
    {
      sum += i;
      n = n % i;
    }
  }
  cout << sum << endl;
  return sum;
}
int main()
{
  int n;
  cin >> n;
  int sumDig = sumDigits(n);
  int sumFact = sumFactorization(n);
  if (sumDig == sumFact)
  {
    cout << "1";
  }
  else
  {
    cout << "0";
  }
}