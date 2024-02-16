include <iostream>
#include <string>
#define MAX 100
using namespace std;
void reverseString(char *str); 
int main() {
    char str[MAX];
    cout<<"Enter a string: ";
    cin>>str;
    reverseString(str);
    cout<<"Reversed string:  "<<str;
    return 0;
}
void reverseString(char *str){
int i, j;
    int length = strlen(str);
    char temp;
    for (i = 0, j = length - 1; i < j; i++, j--) {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
}
