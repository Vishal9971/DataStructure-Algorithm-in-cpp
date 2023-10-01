#include <iostream>
using namespace std;
void reverseArray(int n, int a[])
{
  int s[n];
  int j = 0;
  for (int i = n-1; i >= 0; i--)
  {
    s[i] = a[j];
    j++;
  }
  for (int i = 0; i < n; i++)
  {
    cout << s[i] << endl;
  }
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
  reverseArray(n, a);
}