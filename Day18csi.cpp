#include <iostream>
using namespace std;

int main() {
    string input;
    cout << "Enter a string: ";
    getline(cin, input);

    int vowels = 0, consonants = 0;

    for (char c : input) {
        // Check if the character is an alphabet letter
        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
            // Convert the character to lowercase for case-insensitivity
            char lowercaseC = (c >= 'A' && c <= 'Z') ? c + ('a' - 'A') : c;

            // Check if the character is a vowel
            if (lowercaseC == 'a' || lowercaseC == 'e' || lowercaseC == 'i' || lowercaseC == 'o' || lowercaseC == 'u') {
                vowels++;
            } else {
                consonants++;
            }
        }
    }

    cout << "Vowels: " << vowels << ", Consonants: " << consonants << endl;

    return 0;
}
