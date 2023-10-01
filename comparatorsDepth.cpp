#include<iostream>
using namespace std;
void printArray (int a[],int n){
  for (int i = 0; i < n; i++){
    cout << a[i]<<"\t";
  }
}
bool compare(int a , int b){
  return a > b;
}
void bubbleSort (int a[], int n, bool (&mycompare)(int a,int b)){
  for (int i = 0; i < n-1; i++){
    for (int j = 0; j < n - 1;j++){
      if(mycompare(a[j],a[j+1])){
        swap(a[j], a[j + 1]);
      }
    }
  }
}
int main()
{
  int a[] = {5, 4, 3, 2, 1};
  int n = sizeof(a) / sizeof(int);
  cout << "before bubble sort :\t";
  printArray(a, n);
  cout << endl;
  bubbleSort(a, n, compare);

  cout << "after bubble sort :\t";
  printArray(a, n);
  cout << endl;
  return 0;
}