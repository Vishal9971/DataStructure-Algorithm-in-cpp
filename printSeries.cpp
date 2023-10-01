#include<iostream>
using namespace std;
int main(){
  int N1;
  cin >> N1;
  int N2;
  cin >> N2;
  for (int i = 1; i <= N1;i++){
    int sum = 3*i + 2;
    if(sum%N2==0){
      N1++;
    }
    else{
      cout << sum<<endl;
    }
  }

  // 3n + 2
}