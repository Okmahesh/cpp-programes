#include <iostream>
using namespace std;

int binarySearch(int arr[], int x, int b, int a) {
  while (b <= a) {
    int c = b + (a - b) / 2;

    if (arr[c] == x)
      return c;

    if (arr[c] < x)
      b = c + 1;

    else
      a = c - 1;
  }

  return false;
}

int main(void) {
  int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
  int x;
  cout<<"enter number to search:-";
  cin>>x;
  int n = sizeof(arr) / sizeof(arr[0]);
  int result = binarySearch(arr, x, 0, n - 1);

  if (result == false)
    cout<<"not found"<<endl;
  else
    cout<<"Element is found at index is :- "<<result<<endl;
}
