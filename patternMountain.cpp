#include <iostream>
using namespace std;
int main()
{
  int n;
  cin >> n;
  int sp = n+1;
  int val = 1;
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j <= i;j++){
      cout << val << "\t";
      val++;
    }
    for (int j = 0; j < sp;j++){
      cout << "\t";
    }
    int j = 0;
    if(i==n-1){
      j = 1;
      val--;
      
    }

    for (; j <= i; j++)
    {
      val--;
      cout << val << "\t";

    }
    sp -= 2;
    cout << endl;
  }
}