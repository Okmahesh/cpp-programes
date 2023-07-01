#include <iostream>
using namespace std;

int main() {
    int a, b, gcd;
    cout << "Enter first number:- ";
    cin>>a;
    cout<<endl<<"Enter second number:- ";
    cin>>b;
    if ( b > a) {
        int temp = b;
        b = a;
        a = temp;
 }
 for (int i = 1; i <=  b; ++i) {
    if (a % i == 0 && b % i ==0) {
        gcd = i;
    }
 }
 cout << "GCD of "<<a<<" and "<<b<<" is :- "<< gcd;

  return 0;
}
