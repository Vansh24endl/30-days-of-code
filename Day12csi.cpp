#include <iostream>
using namespace std;
int Missing_Number(int arr[], int n);
int main()
{
    int size;
    cout << "Enter number of elements in array: ";
    cin >> size;
    int arr[size];
    cout << "Enter the numbers in the array: "<<endl;
    for (int i = 0; i < size - 1; i++)
    {
        cin >> arr[i];
    }
    int missingNumber = Missing_Number(arr, size);
    cout << "Missing number is: " << missingNumber;
    return 0;
}
int Missing_Number(int arr[], int size)
{
    int totalSum = (size * (size + 1)) / 2;
    int arraySum = 0;
    for (int i = 0; i < size - 1; i++)
    {
        arraySum += arr[i];
    }
    int missing_Number = totalSum - arraySum;
    return missing_Number;
}
