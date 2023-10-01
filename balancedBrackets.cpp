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

    if (ch == '(' || ch == '[' || ch == '{')
    {
      st.push(ch);
    }
    else if (ch == ')')
    {
      if (st.empty() || st.top() != '(')
      {
        cout << "false";
        return 0;
      }
      else
      {
        st.pop();
      }
    }
    else if (ch == ']')
    {
      if (st.empty() || st.top() != '[')
      {
        cout << "false";
        return 0;
      }
      else
      {
        st.pop();
      }
    }
    else if (ch == '}')
    {
      if (st.empty() || st.top() != '{')
      {
        cout << "false";
        return 0;
      }
      else
      {
        st.pop();
      }
    }
  }
  if(st.empty()){
    cout << "true";
  }else{
    cout << "false";
  }
}