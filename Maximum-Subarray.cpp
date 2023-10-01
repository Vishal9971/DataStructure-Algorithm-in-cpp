#include<iostream>
using namespace std;

void maximumSubarray(int a[],int n){
  int wi, wj;
  int max_sum = INT_MIN;
  for (int i = 0; i < n; i++){
    for (int j = 0; j < n;j++){
      int sum = 0;
      for (int k = j; k <= i;k++){
        sum += a[k];
      }
    if(max_sum<sum){
        max_sum = sum;
        wi = i;
        wj = j;
    }
    }
  }
  cout << "Maximum sum = " << max_sum;
  cout << endl;
  for (int i = wj; i <= wi;i++){
    cout << a[i] << " ";
  }
  cout << endl;
}



int main(){
  int a[] = {1, 4, -2, 3, 9, -6, -2};
  int n = sizeof(a) / sizeof(int);
  maximumSubarray(a, n);
  return 0;
}