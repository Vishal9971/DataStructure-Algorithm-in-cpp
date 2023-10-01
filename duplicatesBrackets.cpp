#include <iostream>
#include <stack>
using namespace std;
int main()
{
  string str;
  cin >> str;
  stack<char> st;
  for (int i = 0; i < str.length(); i++)
  {
    char ch = str[i];
    if (ch == ')')
    {
      if (st.top() == '(')
      {
        cout << "true" << endl;
        return 0;
      }
      else
      {
        while (st.top() != '(')
        {
          st.pop();
        }
        st.pop();
      }
    }
    else
    {
      st.push(ch);
    }
  }
  cout << "false" << endl;
}