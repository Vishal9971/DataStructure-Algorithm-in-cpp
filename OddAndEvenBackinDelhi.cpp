#include <iostream>
using namespace std;

void checkNumber(int n)
{
  int evenSum = 0;
  int oddSum = 0;
  // for (int i = 0; i < count; i++)
  while (n > 0)
  {
    int rem = n % 10;
    n = n / 10;
    if (rem % 2 == 0)
    {
      evenSum += rem;
    }
    else
    {
      oddSum += rem;
    }
  }
  if (evenSum % 4 == 0 || oddSum % 3 == 0)
  {
    cout << "Yes" << endl;
  }
  else
  {
    cout << "No" << endl;
  }
}

int countNumber(int n)
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
int main()
{
  int t;
  cin >> t;
  while (t > 0)
  {
    int n;
    cin >> n;
    // int count = countNumber(n);
    checkNumber(n);
    t--;
  }
}