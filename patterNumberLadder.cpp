#include<iostream>
using namespace std;
int main(){
  int n;
  cin >> n;
  int no = 1;
  for (int i = 0; i <n;i++){
    for (int j = 0; j <= i;j++){
      cout << no<<" ";
      no++;
    }
    cout << endl;
  }
}