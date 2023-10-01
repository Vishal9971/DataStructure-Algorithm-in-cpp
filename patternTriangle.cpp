#include <iostream>
using namespace std;
int main()
{
  int n;
  cin >> n;
  int no = 1;
  int st = 1;
  int sp = n - 1;
  for (int i = 0; i < n; i++){
    for (int j = 0; j < sp;j++){
      cout << "\t";
    }

    for (int j = 0; j < st;j++){
      cout << no << "\t";
      if(j<=i){
        no++;

      }
      else{
        no--;
      }
      // idx++;
    }
    no += 2;
    st += 2;
    sp--;
    cout << endl;

  }
}