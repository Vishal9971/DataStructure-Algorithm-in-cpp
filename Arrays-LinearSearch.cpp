#include <iostream>
#include <climits>
using namespace std;

int targetFind(int m, int a[], int n)
{
  for (int i = 0; i < n; i++)
  {
    if (a[i] == m)
    {
      return i;
    }
  }
  return -1;
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
  int m;
  cin >> m;
  int ans = targetFind(m, a, n);
  cout << ans << endl;
  return 0;
}