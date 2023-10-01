#include <iostream>
using namespace std;
int main()
{
  int ans = 0;
  int N;
  cin>>N;
  int no;
  for (int i = 0; i < N;i++){
    cin >> no;
    ans = ans ^ no;
  }
  cout << ans << endl;
  // int arr[] = {2, 3, 5, 3, 2};
  // int n = 5;
  // int no;
  // for (int i = 0; i < n - 1; i++)
  // {
  //   no = arr[i] ^ arr[i + 1];
  // }
  // cout << no << endl;
}