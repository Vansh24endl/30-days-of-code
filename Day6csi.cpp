#include <iostream>
using namespace std;
int main(){
    int n;
    int num_list[n];    // let n = 4
    cout<<"Enter number of terms: ";
    cin >> n;
    for (int i=0; i<n; i++)
    {
        cout << "Enter number" <<i+1<<": ";
        cin >> num_list[i];  // user input the vlaue eg: 16, 54, 98, 37, 46
    }
    for (int i=0; i<n; i++)
    {
        cout << num_list[i]<< " ";
    }
    // output : 16 54 98 37 46
    return 0;
}
