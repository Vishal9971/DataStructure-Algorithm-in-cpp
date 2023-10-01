#include <iostream>
using namespace std;

void maximumSumSubArray(int a[], int n)
{
  int max_sum = INT_MIN;
  for (int i = 0; i < n; i++)
  {
    for (int j = i; j < n; j++)
    {
      int sum = 0;
      for (int k = i; k <= j; k++)
      {
        sum += a[k];
      }
      if (max_sum < sum)
      {
        max_sum = sum;
      }
    }
  }
  cout << "Maximum Sum Subarray : " << max_sum << endl;
}
int main()
{
  int a[] = {1, 4, -2, 3, 9, -6, -2};
  int n = sizeof(a) / sizeof(int);

  maximumSumSubArray(a, n);
  return 0;
}