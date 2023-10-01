#include <iostream>
using namespace std;
int main()
{
  int n;
  cin >> n;
  int p = n;
  int count = 0;
  int odd = 0;
  int even = 0;
  while (n > 0)
  {
    int rem = n % 10;
    n = n / 10;
    count++;

  }
  n = p;
  for (int i = 1; i <= count; i++)
  {
    int rem = n % 10;
    n = n / 10;
    if (i % 2 != 0)
    {
      odd += rem;
    }
    else
    {
      even += rem;
    }
  }
  cout << odd << endl;
  cout << even << endl;
}