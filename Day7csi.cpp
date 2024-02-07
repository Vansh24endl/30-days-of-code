#include<iosteram>
using namespace std;
int main () {
 // let an array of 4 elements
    int arr[4] ={2,4,8,16};
    int sum=0;
  for (int i = 0; i< 4; i++)
    {
      sum += arr[i];
    }
      cout<<"The sum of array is:"<<sum; // output: 30
        return 0;
}
