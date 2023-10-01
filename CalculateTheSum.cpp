#include <iostream>
using namespace std;
void calculateSum(int a[], int n, int q)
{
  int mod = 1000000000 + 7;
  while (q > 0)
  {
    q--;
    int x;
    cin >> x;
    int b[n];

    for (int i = 0; i < n; i++)
    {
      int idx = i - x;

      if (idx <0)
      {
        idx = idx + n;
      }
      b[i] = (a[idx] + a[i]) % mod;
    }
    a = b;
  }
  int sum = 0;
  for (int i = 0; i < n; i++)
  {
    sum = (sum + a[i]) % mod;
  }
  cout << sum;
}
int main()
{
  int n;
  cin >> n;
  int a[n];
  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
  }
  int q;
  cin >> q;
  calculateSum(a, n, q);
}