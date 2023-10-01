#include <iostream>
using namespace std;
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
  while (q > 0)
  {
    int k, b;
    cin >> k >> b;
    for (int i = 0; i < n; i++)
    {
      if (a[i] <= k)
      {
        b--;
        k = k - a[i];
      }
    }
    if (b == 0)
    {
      cout << "Yes";
    }
    else
    {
      cout << "No";
    }
  }
}