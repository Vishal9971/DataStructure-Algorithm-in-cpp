#include <iostream>
using namespace std;
int main()
{
  int n;
  cin >> n;
  int st = 1;
  int val = 1;
  int run = 2 * n - 1;
  int sp = n - 1;

  for (int i = 0; i < run; i++)
  {
    int cval = val;
    for (int j = 0; j < sp; j++)
    {
      cout << "\t";
    }
    for (int j = 0; j < st; j++)
    {
      cout << cval << "\t";
      if (j <= st / 2)
      {
        cval++;
      }
      else
      {
        cval--;
      }
    }
    cout << endl;
    if (i < run/2)
    {
      val++;
      sp--;
      st += 2;
    }
    else
    {
      val--;
      sp++;
      st -= 2;
    }
  }
}