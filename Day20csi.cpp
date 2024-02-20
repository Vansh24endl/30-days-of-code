#include <iostream>
#include <cctype> // for islower and isupper
#include <string>
using namespace std;
string toggle_cases(const string& input_str) {
    string toggled_str;
    for (char c : input_str) {
        if (islower(c)) {
            toggled_str += toupper(c);
        } else if (isupper(c)) {
            toggled_str += tolower(c);
        } else {
            toggled_str += c;
        }
    }
    return toggled_str;
}
int main() {
    string input_string ;
    cout<<"Enter a String: ";
    getline(cin,input_string);
    cout << toggle_cases(input_string) << endl; 
    return 0;
}
