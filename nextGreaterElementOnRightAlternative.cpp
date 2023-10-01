#include<iostream>
#include<stack>
using namespace std ;
int main(){
  int n;
  cin >> n;
  int a[n];
  for (int i = 0; i < n; i++){
    cin >> a[i];
  }
  int nar[n];
  stack<int> st;
  st.push(0);
  for (int i = 0; i < n; i++){
    while(st.size()>0&&a[i]>a[st.top()]){
      int pos = st.top();
      nar[pos] = a[i];
      st.pop();
    }
    st.push(i);
  }
  while(st.size()>0){
    int pos = st.top();
    nar[pos] = -1;
    st.pop();
  }

  for (int i = 0; i < n;i++){
    cout << nar[i] << " ";
  }
}