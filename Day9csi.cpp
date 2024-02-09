#include<iostream>
using namespace std;
int main () {
  int size = 5,search;
 // consider an array having 5 elements
  int arr[size]={1,2,3,4,5};
  cout<<"search an element in array"<<endl;
  cin>>search;
    for (int i=0; i<size; i++)
    {
        if (arr[i]==search)
       {
           cout<<search<<" "<<"is present in index"<<i;
           break;
       }
  }
  return 0;
}
