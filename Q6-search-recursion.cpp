#include <iostream>
using namespace std;

int binarySearch(int array[], int x, int b, int a) {
  if (a >= b) {
    int c = b + (a - b) / 2;


    if (array[c] == x)
      return c;


    if (array[c] > x)
      return binarySearch(array, x, b, a - 1);

    return binarySearch(array, x, c + 1, a);
  }

  return false;
}

int main(void) {
  int arr[] = {1,2,3,4,5,6,7,8,9};
  int x;
  cout<<"Enter no to search in set:- ";
  cin>>x;
  int n = sizeof(arr) / sizeof(arr[0]);
  int result = binarySearch(arr, x, 0, n - 1);
  if (result == false)
    cout<<"Not found"<<endl;
  else
    cout<<"Element is found at index is :-"<<result<<endl;
}
