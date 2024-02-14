#include <iostream>
using namespace std;

int countOccurrences(int arr[], int size, int target) {
    int count = 0;
    for (int i = 0; i < size; ++i) {
        if (arr[i] == target) {
            ++count;
        }
    }
    return count;
}

int main() {
    int myArray[] = {1, 3, 2, 4, 3, 6, 3};
    int targetElement = 3;

    int occurrences = countOccurrences(myArray, sizeof(myArray) / sizeof(myArray[0]), targetElement);

    cout << "The target element " << targetElement << " appears " << occurrences << " times in the array." <<endl;
  
    return 0;
}
