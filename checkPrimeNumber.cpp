#include<iostream>
using namespace std;
int main(){

  int n;
  cin >> n;
  int count;
  for (int i = 2; i*i < n;i++){
    if( n%i==0){
      count++;
    }
  }
  if(count==0){
    cout << "Prime Number"<<endl;
  }
  else
    cout << "Not Prime Number"<<endl;
}