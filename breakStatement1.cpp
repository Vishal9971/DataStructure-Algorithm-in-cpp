#include<iostream>
using namespace std;
int main(){
  int n;
  cin >> n;
  int i = 1;
  while(i<=n){

    if(i==5){
      break;
    }
    cout << i << " ";
    i = i + 1;
  }
  cout << endl;
}