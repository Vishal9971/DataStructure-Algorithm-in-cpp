#include <iostream>
using namespace std;
int main()
{
  char ch;
  int n1;
  int n2;
  int ans;
  // cin >> ch;
  while (true)
  {
    cin >> ch;

    while (ch != 'x' || ch != 'X')
    {
      switch (ch)
      {
      case '+':
        cin >> n1;
        cin >> n2;
        ans = n1 + n2;
        cout << ans << endl;
        break;
      case '-':
        cin >> n1;
        cin >> n2;
        ans = n1 - n2;
        cout << ans << endl;
        break;
      case '*':
        cin >> n1;
        cin >> n2;
        ans = n1 * n2;
        cout << ans << endl;
        break;
      case '/':
        cin >> n1;
        cin >> n2;
        ans = n1 / n2;
        cout << ans << endl;
        break;
      case '%':
        cin >> n1;
        cin >> n2;
        ans = n1 % n2;
        cout << ans << endl;
        break;
      case 'x':
        break;
      case 'X':
        break;
      default:
        cout << "Invalid operation. Try again." << endl;
        break;
      }
    }
  }
}
