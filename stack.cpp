#include <iostream>
#include <stack>
// #include <ostream>
using namespace std;
int main()
{
  stack<int> st;
  st.push(10);
  st.push(20);
  st.push(30);
  st.push(40);
  st.push(120);
  st.pop();
  st.pop();
  st.top();
  st.push(500);
  st.push(600);
  std::stack<int> mystack = st;
  while (!mystack.empty())
  {
    std ::cout << mystack.top() << std::endl;
    mystack.pop();
  }
  // cout << st << endl;
  // st.pop();
  // st.pop();
  // st.top();
  // st.push(500);
  // st.push(600);
  // cout << st << endl;


}