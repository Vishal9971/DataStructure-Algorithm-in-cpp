#include <iostream>
using namespace std;
int main()
{
  int n;
  cin >> n;
  int run = 2 * n + 1;
  int st = run;
  int sp = 0;
  int val = n;
  for (int i = 0; i < run;i++){
    int cval = val;
    for (int j = 0; j < sp; j++)
    {
      cout << "  ";
    }
    for (int j = 0; j < st;j++){
      cout << val << " ";
      if(j<st/2){
        val--;
      }
      else{
        val++;
      }
    }

    cout << endl;
    if(i<run/2){
      st-=2;
      sp++;
      val-=2;
    }
    else{
      st+=2;
      sp--;
      // val++;
    }
  }
}