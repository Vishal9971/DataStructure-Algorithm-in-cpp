#include<iostream>
using namespace std;
int main(){
  int n;
  cin >> n;
  int row = 0;
  int st = 1;
  while(row<n){
    int col = 0;
    while(col<=row){
      cout << st<<" ";
      st++;
      col++;
    }
    ++row;
    cout << endl;
  }
}