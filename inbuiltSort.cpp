#include <iostream>
#include <algorithm>
using namespace std;

bool compare(int a,int b){
  return a > b;
}
int main()
{
  int arr[] = {9, 4, 3, 6, 7, 8, 2, 7, 9};
  int n = sizeof(arr) / sizeof(int);
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
  cout << endl;
  sort(arr, arr + n,compare);
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
  cout << endl;
}