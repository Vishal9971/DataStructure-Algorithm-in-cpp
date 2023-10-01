#include <iostream>
using namespace std;
void inverseArray(int a[], int n)
{
  int b[n];
  int no;
  for (int i = 0; i < n;i++){
    no = a[i];
    b[no] = i;
  }
  for (int i = 0; i < n; i++){
    cout << b[i] << " ";
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
  inverseArray(a, n);
}