#include <iostream>
using namespace std;
int fibonacci(int n);
int main() {
  int n;
  cout << "Enter a positive integer: ";
  cin >> n;
  cout << "The " << n << "the Fibonacci number is: " <<fibonacci(n) << endl;
  return 0;
}
int fibonacci(int n) {
  if (n <= 1) {
    return n;
  }
  else {
    return fibonacci(n-1) + fibonacci(n-2);
  }
}
