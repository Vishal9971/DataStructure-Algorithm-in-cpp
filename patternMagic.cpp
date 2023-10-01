#include <iostream>
using namespace std;
int main()
{
  int n;
  cin >> n;
  int run = n * 2 - 1;
  int sp = -1;
  int st = n;

  for (int i = 0; i < run; i++)
  {
    for (int j = 0; j < st; j++)
    {
      cout << "*";
    }
    for (int j = 0; j < sp; j++)
    {
      cout << " ";
    }
    int j=0;
    if (i == 0||i==run-1)
    {
      j = 1;
    }
    for (; j < st;j++){
      cout << "*";
    }
    if(i<run/2){
      st--;
      sp+=2;
    }
    else{
      st++;
      sp-=2;
    }
    cout << endl;
  }
}