#include <iostream>
#include <unordered_map>
using namespace std;

      // This code is write by vansh Dhumal 
int romanToInt(string s) {
    unordered_map<char, int> romanValues = {
        {'I', 1},
        {'V', 5},
        {'X', 10},
        {'L', 50},
        {'C', 100},
        {'D', 500},
        {'M', 1000}
    };

    int result = 0;

    for (int i = 0; i < s.length(); ++i) {
        if (i < s.length() - 1 && romanValues[s[i]] < romanValues[s[i + 1]]) {
            result += romanValues[s[i + 1]] - romanValues[s[i]];
            ++i;  // Skip the next character
        } else {
            result += romanValues[s[i]];
        }
    }

    return result;
}

int main() {
    //  we find the value of Roman numner 
    string romanNumeral = "XII";
    int result = romanToInt(romanNumeral);
    cout << "The integer representation of " << romanNumeral << " is: " << result << endl;

    return 0;
}
