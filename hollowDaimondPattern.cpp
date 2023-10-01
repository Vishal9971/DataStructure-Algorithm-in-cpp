#include<iostream>
using namespace std;
int main(){
  int n;
  cin >> n;
  int st = n / 2 + 1;
  int sp = -1;
  for (int i = 0; i < n;i++){
    for (int j = 0; j < st;j++){
      cout << "*\t";
    }
    for (int j = 0; j < sp;j++){
      cout << "\t";
    }
    int j = 0;
    if(i==0 || i==n-1){
      j = 1;
    }
    for (; j < st; j++)
    {
      cout << "*\t";
    }
      if (i < n / 2)
      {
        st--;
        sp += 2;
      }
      else
      {
        st++;
        sp -= 2;
      }
    cout << endl;
  }
}