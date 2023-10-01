#include <iostream>
using namespace std;

void shopping(int m, int n)
{
  int mphone = 0;
  int nphone = 0;
  for (int i = 1;; i++)
  {
    if (i % 2 != 0)
    {
      if (mphone + i < m)
      {
        mphone += i;
      }
      else
      {
        cout << "Harshit";
        break;
      }
    }
    else
    {
      if (nphone + i < n)
      {
        nphone += i;
      }
      else
      {
        cout << "Aayush";
        break;
      }
    }
  }
}

int main()
{
  int t;
  cin >> t;
  while (t > 0)
  {
    int M, N;
    cin >> M;
    cin >> N;
    shopping(M, N);
    t--;
  }
}