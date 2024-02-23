#include <iostream>
using namespace std;
int sum_digits(int n) {
    if (n == 0) {
        return 0;
    }
    else {
        return (n % 10) + sum_digits(n / 10);
    }
}
int main() {
    int num = 123456789;
    int result = sum_digits(num);
    cout << "Sum of digits in " << num << " is " << result << endl;
    return 0;
}
