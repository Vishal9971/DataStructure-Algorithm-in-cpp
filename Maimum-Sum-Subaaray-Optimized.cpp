#include <iostream>
using namespace std;

void optimizeSubarray(int a[], int n)
{
  int max_sum = INT_MIN;
  int wi, wj;
  int csum[100] = {0};
  for (int i = 1; i < n; i++)
  {
    csum[i] += csum[i - 1] + a[i];
  }
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      int sum = 0;
      sum = csum[j] - csum[i - 1];
      if(max_sum<sum){
        max_sum = sum;
        wi = i;
        wj = j;
      }
    }

  }
  cout << "maximum sum = " << max_sum << endl;
  for (int i = wi; i <= wj;i++){
    cout << a[i] << " ";
  }
  cout << endl;
}

int main()
{
  int a[] = {0, -1, 2, -2, 3, 6, -4, -3};
  int n = sizeof(a) / sizeof(int);
  optimizeSubarray(a, n);
  return 0;
}