#include <iostream>
using namespace std;
int main()
{
  int n;
  cin >> n;
  int run = 2 * n;
  int sp = n - 1;
  int st = n;
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < sp; j++)
    {
      cout << " ";
    }

    for (int j = 0; j < st; j++)
    {
      if (j == 0 || j == st - 1 || i == 0 || i == n - 1)
      {
        cout << "*";
      }
      else
      {
        cout << " ";
      }
    }


    sp--;
    cout << endl;
  }
}