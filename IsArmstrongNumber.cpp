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
void isAmrstrong(int n)
{
  int p = n;
  int count = counting(n);
  n = p;
  int ans = 0;
  while (n > 0)
  {
    int rem = n % 10;
    rem = int(pow(rem, count));
    ans += rem;
    n = n / 10;
  }
  if (ans == p)
  {
    cout << "true";
  }
  else{
    cout << "false";
  }

}

int main()
{
  int n;
  cin >> n;
  isAmrstrong(n);
}