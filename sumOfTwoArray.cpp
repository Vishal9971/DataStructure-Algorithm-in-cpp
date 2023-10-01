#include <iostream>
using namespace std;
int main()
{
  int m;
  cin >> m;
  int a[m];
  for (int i = 0; i < m; i++)
  {
    cin >> a[i];
  }
  int n;
  cin >> n;
  int b[n];
  for (int i = 0; i < n; i++)
  {
    cin >> b[i];
  }
  int max = 0;
  if (m > n)
  {
    max = m;
  }
  else
  {
    max = n;
  }
  int sum[max];
  int i = m - 1;
  int j = n - 1;
  int k = max - 1;
  int c = 0;
  while (k >= 0)
  {
    int d = c;
    if (i >= 0)
    {
      d += a[i];
    }
    if (j >= 0)
    {
      d += b[j];
    }
    c = d / 10;
    d = d % 10;
    sum[k] = d;
    i--;
    j--;
    k--;
  }
  if (c != 0)
  {
    cout << c;
  }
  for (int val : sum)
  {
    cout << val;
  }
}