#include <iostream>
using namespace std;
int main()
{
  char ch;
  cin >> ch;
  switch (ch){
    case 'e':
    case 'E':
      cout << "East" << endl;
      break;
    case 'n':
    case 'N':
      cout << "North" << endl;
      break;
    case 'W':
    case 'w':
      cout << "West" << endl;
      break;
    case 's':
    case 'S':
      cout << "South" << endl;
      break;
    default:
      cout << "Invaild" << endl;
  }
}