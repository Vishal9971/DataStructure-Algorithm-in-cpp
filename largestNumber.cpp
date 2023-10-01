#include<iostream>
using namespace std;
int main(){
  int n;
  cin >> n;
  int largestNo= 0;
  int no;
  int i = 0;
  while(i<n){
    cin >> no;
    if(largestNo<no){
      largestNo = no;
    }
    i++;
  }
  cout << largestNo<<endl;
}