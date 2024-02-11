#include <iostream>
using namespace std;
void insertion_sort(int arr[],int size);
int main(){
    int size=5;
    int arr[size]={22,25,24,21,23};

    cout<<"Origanl array"<<endl;

    for (int j = 0; j < size; j++)
    {
        cout<<arr[j]<<" ";
    }
    cout<<endl;
    insertion_sort(arr,size);
    cout<<"shorted array"<<endl;
    for (int k = 0; k < size; k++)
    {
        cout<<arr[k]<<" ";
    }
    cout << endl<<endl;
    //Binary search 
    int min=0,max=size,found=0,srch_iteam,mid_indx;
    cout<<"Search an element: ";
    cin>>srch_iteam;
    for (int i = 0; min<=max; i++)
    {
        mid_indx = ((min+max)/2);
        if(arr[mid_indx]==srch_iteam)
        {
            found = 1;
            cout <<srch_iteam<<" is found at index "<<mid_indx;
            break;
        }
        else if(arr[mid_indx]<srch_iteam){
                min = mid_indx+1;
        }
        else{
            max = mid_indx-1;
        }
    }
    return 0;
}
void insertion_sort(int arr[],int size){
    for (int i = 1; i < size; i++)
    {
        int j = i;
        for (j; j>=1; j--)
        {
            if (arr[j-1]>arr[j])
            {
                swap(arr[j-1],arr[j]);
            }
        }
        
    }
    
}
