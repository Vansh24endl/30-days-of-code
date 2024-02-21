#include <iostream>
using namespace std;

int factorial(int num){
    int fac;
    if (num < 0) {
        cerr << "The number cannot be negative";
        return -1; // Indicate error
    }
    else{
      if(num==0||num==1){
             return 1;
      }
      else{
         fac = num*factorial(num-1);
         return fac;
      }
    }
}

int main() {
    int num;
    cout << "Enter any non-negative integer: ";
    cin >> num;
    cout << "Factorial of " << num << " is: " << factorial(num) << endl; // Function call
    return 0;
}
