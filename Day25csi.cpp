#include<iostream>
using namespace std;
int array_Sum(int arr[], int size, int sum);
int main()
{
    int arr[] = {1, 2, 3, 4, 5,6,7,8};
  int size = sizeof(arr) / sizeof(arr[0]); // no. of elements in array

    int sum = 0;
    cout << "The sum of the elements in the array is " << array_Sum(arr, size, sum) << endl;
    return 0;
}

int array_Sum(int arr[], int size, int sum){
    if (size == 0){
        return sum;
    }
    return array_Sum(arr, size - 1, sum + arr[size - 1]);
}
