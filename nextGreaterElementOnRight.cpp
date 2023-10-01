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
  int ar[n];
  stack<int> st;
  st.push(a[n - 1]);
  ar[n - 1] = -1;
  for (int i = n - 2; i >= 0; i--)
  {
    while (st.size() > 0 && a[i] >= st.top())
    {
      st.pop();
    }
    if (st.size() == 0)
    {
      ar[i] = -1;
    }
    else
    {
      ar[i] = st.top();
    }
    st.push(a[i]);
  }

  for (int i = 0; i < n; i++)
  {
    cout << ar[i] << " ";
  }
}