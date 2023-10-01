#include<iostream>
using namespace std ;
int main(){
  int arr[6] = {4, 20, 1, 40, 9, 5};
  int n = 6;
  int max = INT_MIN;
  int min = INT_MAX;

  for (int i = 0; i < n; i++){
    if(max<arr[i]){
      max = arr[i];
    }
    if(min>arr[i]){
      min = arr[i];
    }
  }
  int ans = max - min;
  cout << ans << endl;
}