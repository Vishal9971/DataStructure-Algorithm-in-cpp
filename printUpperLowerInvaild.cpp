#include <iostream>
#include <cctype>
using namespace std;
int main()
{
  char ch;
  cin >> ch;
  if (islower(ch))
    cout << "lowercase";
  else if (isupper(ch))
    cout << "UPPERCASE";

  else
    cout << "Invaild";
  return 0;
}