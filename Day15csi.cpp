include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int n, k;
    cout << "Enter the size of the array: ";
    cin >> n;

    int data[n];
    cout << "Enter the elements of the array: "<<endl;
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the " << i + 1 << " element of an array: ";
        cin >> data[i];
    }
    cout << "Enter the number of step to rotate: ";
    cin >> k;
    cout << "Orignal array";
    for (int i = 0; i < n; ++i)
    {
        cout << data[i] << " ";
    }
    cout << endl;
    rotate(data, data + k , data + 5);

    cout << "Reversed array:";
    for (int i = 0; i < 5; ++i)
    {
        cout << data[i] << " ";
    }
    return 0;
}
