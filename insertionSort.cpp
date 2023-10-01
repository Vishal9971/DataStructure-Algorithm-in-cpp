#include <iostream>
using namespace std;
int main()
{
  int arr[] = {5, 4, 2, 1, 3};
  int n = 5;
  int i, j;
  for (i = 1; i < n; i++)
  {
    int pic = arr[i];
    for ( j = i - 1; j >= 0 && arr[j]>pic; j--)
    {
        arr[j + 1] = arr[j];
      }
      arr[j + 1] = pic;
    
  }
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
}