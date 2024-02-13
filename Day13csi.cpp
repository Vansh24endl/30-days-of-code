#include <iostream>
using namespace std;
int main(){
    int size=5,avg,sum;
    int arr[size]={8,6,5,4,2};
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int min = arr[0];
    int max = arr[0];

    for (int i = 0; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
        if (arr[i] < min) {
            min = arr[i];
        }
       sum += arr[i];
    }
    cout<<"The sum of an array elements is: "<<sum<<endl;
    cout<<"The average of array elements is: "<<(sum/size)<<endl;
    cout<<"The minimum value in array is: "<<min<<endl;
    cout<<"The maximun value in array is: "<<max<<endl;
    return 0;
}
