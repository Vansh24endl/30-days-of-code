#include <iostream>
#include <algorithm>

int main() {
    int arr[] = {2, 4, 6, 4};

    // Display original array
    std::cout << "Original array: ";
    for (int i : arr) {
        std::cout << i << " ";
    }

    // Reverse the array
    std::reverse(std::begin(arr), std::end(arr));

    // Display reversed array
    std::cout << "\nReversed array: ";
    for (int i : arr) {
        std::cout << i << " ";
    }

    return 0;
}
