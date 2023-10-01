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
  int m;
  cin >> m;
  int b[m];
  for (int i = 0; i < m; i++)
  {
    cin >> b[i];
  }
  int diff[m];
  int c = 0;
  int i = n - 1;
  int j = m - 1;
  int k = m - 1;
  while (k >= 0)
  {
    int d = 0;
    int aval = i >= 0 ? a[i] : 0;
    if (b[j] + c >= a[i])
    {
      d = b[j] + c - aval;
    }
    else
    {
      d = b[j] + c + 10 - aval;
      c = -1;
    }
    diff[k] = d;
    i--;
    j--;
    k--;
  }
  int idx = 0;
  while (idx < m)
  {
    if (diff[idx] == 0)
    {
      idx++;
    }
    else
    {
      break;
    }
  }
  while(idx<m){
    cout << diff[idx] << "\t";
    idx++;
  }
}