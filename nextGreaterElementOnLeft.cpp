#include <iostream>
#include <stack>
using namespace std;
int main()
{
  int n;
  cin >> n;
  int a[n];
  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
  }
  int nar[n];
  stack<int> st;
  st.push(0);
  nar[0] = 1;
  for (int i = 1; i < n; i++)
  {
    while (st.size() > 0 && a[i] > a[st.top()])
    {
      st.pop();
    }
    if (st.size() == 0)
    {
      nar[i] = i + 1;
    }
    else
    {
      nar[i] = i - st.top();
    }
    st.push(i);
  }
  for (int i = 0; i < n; i++)
  {
    cout << nar[i] << " ";
  }
}