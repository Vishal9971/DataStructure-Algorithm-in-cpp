#include <iostream>
using namespace std;
int main()
{
  int n;
  cin >> n;

  int sp = n - 1;
  int st = 1;
  for (int i = 0; i < n; i++)
  {
    int no = 1;
    for (int j = 0; j <sp; j++)
    {
      cout << "  ";

    }
    for (int j = 0; j < st; j++)
    {
      cout << no << " ";
      no++;
    }
    st += 2;
    sp--;
    cout << endl;
  }
}