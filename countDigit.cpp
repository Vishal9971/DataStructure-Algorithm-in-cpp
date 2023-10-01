#include<iostream>
using namespace std;
int main(){
  int n;
  cin >> n;
  int f;
  cin>>f;
  int count = 0;
  while(n>0){
    int rem =n%10;
    if(rem==f){
      count++;
    }
    n = n / 10;

  }
  cout << count;
}