#include <iostream>
using namespace std;

void replace(int n)
{
  int p = 1;
  int ans = 0;
  while (n > 0)
  {

    int rem = n % 10;
    if(rem==0){
      rem = 5;
    }
    ans += rem * p;
    p = p * 10;
    n = n / 10;
  }
  cout << ans;
}
int main()
{
  int n;
  cin >> n;
  replace(n);
}