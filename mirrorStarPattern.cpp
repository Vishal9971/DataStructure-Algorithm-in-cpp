#include <iostream>
using namespace std;
int main(){
  int n;
  cin >> n;
  int sp = n / 2 + 1;
  int st = 1;
  for (int i = 0; i < n;i++){
    for (int j = 0; j < sp;j++){
      cout << "\t";
    }
    for (int j = 0; j < st;j++){
      cout << "*\t";
    }
    if(i>=n/2){
      st-=2;
      sp++;
    }
    else{
      st+=2;
      sp--;
    }
      cout << endl;

  }
}