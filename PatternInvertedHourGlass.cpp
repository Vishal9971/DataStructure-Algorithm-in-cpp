#include <iostream>
using namespace std;
int main()
{
  int n;
  cin >> n;
  int run = 2 * n + 1;
  int st = 1;
  int sp = 2 * n - 1;
  int val = n;
  for (int i = 0; i < run; i++)
  {
    for (int j = 0; j < st; j++)
    {
      cout << val << " ";
      val--;
    }
    for (int j = 0; j < sp; j++)
    {
      cout << "  ";
    }
    int j = 0;
    if (i == run / 2)
    {
      j = 1;
      val++;
    }
    for (; j < st; j++)
    {
      val++;
      cout << val << " ";

    }
    cout << endl;
    if (i < run / 2)
    {

      sp -= 2;
      st++;
    }
    else
    {
      // val--;
      // val++;
      sp += 2;
      st--;
    }
  }
}