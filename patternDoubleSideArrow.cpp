#include <iostream>
using namespace std;
int main()
{
  int n;
  cin >> n;
  int sp = n - 1;
  int st = 1;
  int sp1 = -1;


  for (int i = 0; i < n; i++)
  {
    int val = 1;
    for (int j = 0; j < sp; j++)
    {
      cout << "  ";
    }
    for (int j = 0; j < st;j++){
      cout << "1 ";
    }
    for (int j = 0; j < sp1; j++)
    {
      cout << "  ";
    }
    int j = 0;

   if(i==0 ||i==n-1){
      j = 1;
   } for (; j < st; j++)
    {
      cout <<val<< " ";
      // val++;
    }
      cout << endl;
    if (i < n / 2)
    {
      sp -= 2;
      st++;
      sp1 += 2;
      val++;
    }
    else
    {
      val--;
      sp += 2;
      st--;
      sp1 -= 2;
    }
  }
}