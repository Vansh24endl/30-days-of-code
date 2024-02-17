#include <iostream>
#include <cstring>
#define MAX 100
using namespace std;
void removeDuplicate(char *str, char select_char); 
int main() {
    char str[MAX],select_char;
    cout<<"Enter a string: ";
    cin>>str;
    cout<<"Enter the character to be select: ";
    cin>>select_char;

    removeDuplicate(str,select_char);
    cout<<"Resulting string after removing duplicates:  "<<str;
    return 0;
}
void removeDuplicate(char *str, char select_char){
    int len = strlen(str);
    int index = 0;
  
    for (int i = 0; i < len; i++) {
        if (str[i] != select_char) {
            str[index++] = str[i];
        }
    }
  
    str[index] = '\0';
}
