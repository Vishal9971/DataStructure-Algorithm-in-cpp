#include <iostream>
using namespace std;
int main()
{
  int a[] = {1, 4, 5, 6, 8, 10};
  int n = sizeof(a) / sizeof(int);
  int target = 11;

  // two pointer approach
  int i = 0;
  int j = n - 1;
  while (i < j)
  {
    if (a[i] + a[j] == target)
    {
      cout << a[i] << "\t" << a[j];
      cout << endl;
    }
    i++;
    j--;
  }
    //  for (int i = 0; i < n; i++){
    //    for (int j = 0; j < n;j++){
    //     if(a[i]+a[j]==target){
    //       cout << a[i] << "\t" << a[j];
    //     }
    //    }
    //  }
}