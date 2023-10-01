#include <iostream>
using namespace std;
int main()
{
  int arr[] = {5, 4, 2, 3, 1};
  int n = 5;
  for (int i = 0; i < n; i++)
  {
    int min = i;
    for (int j = i + 1; j < n; j++)
    {
      if (arr[min] > arr[j])
      {
        min = j;
      }
    }
    int temp = arr[i];
    arr[i] = arr[min];
    arr[min] = temp;
  }

  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
}