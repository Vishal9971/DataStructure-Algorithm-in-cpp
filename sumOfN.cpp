#include<iostream>
using namespace std;
int main(){
  int n;
  cin >> n;
  int input;
  int sum;
  for (int i = 0; i < n;i++){
    cin >> input;
    sum = sum +input;
  }
  cout << sum<< endl;
}