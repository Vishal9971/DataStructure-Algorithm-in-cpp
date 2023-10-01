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
  int r[n]; // nextGreaterElement on right
  stack<int> rst;
  rst.push(n-1);
  r[n - 1] = n;
  for (int i = n - 2; i >= 0; i--)
  {
    while (rst.size() > 0 && a[i] <= a[rst.top()])
    {
      rst.pop();
    }
    if (rst.size() == 0)
    {
      r[i] = n;
    }
    else
    {
      r[i] = rst.top();
    }
    rst.push(i);
  }
  for (int i = 0; i < n;i++){
    cout << r[i] << " ";
  }
  cout << endl;
  int l[n]; // nextGreaterElement on left
  stack<int> lst;
  lst.push(0);
  l[0] = -1;
  for (int i = 1; i < n; i++)
  {
    while (lst.size() > 0 && a[i] <= a[lst.top()])
    {
      lst.pop();
    }
    if (lst.size()==0){
      l[i] = -1;
    }
    else{
      l[i] = lst.top();
    }
    lst.push(i);
  }
  for (int i = 0; i < n; i++)
  {
    cout << l[i] << " ";
  }
  cout << endl;
  int maxArea = 0;
  for (int i = 0; i < n; i++)
  {
    int width = r[i] - l[i] - 1;
    int area = a[i] * width;
    if (area > maxArea)
    {
      maxArea = area;
    }
  }
  cout << maxArea << endl;
}