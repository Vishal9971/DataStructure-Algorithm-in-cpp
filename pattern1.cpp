#include<iostream>
using namespace std;
int main(){
  int n;
  cin >> n;
  int st = 1;
  for (int i = 0; i < n;i++){
    for (int j = 0; j < st;j++){
      cout << "*";
    }
    st++;
    cout << endl;
  }
}