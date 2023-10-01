#include<iostream>
#include <climits>
using namespace std;
int main(){
  int n;
  int largestNo = INT_MIN;
  for (int i = 0; i < 5;i++){
    cin >> n;
    if(largestNo<n){
      largestNo = n;
    }

  }
  cout << largestNo;
}