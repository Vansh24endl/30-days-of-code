#include <iostream>
#include <stack>

using namespace std;

bool isValidParentheses(const string& s) {
    stack<char> stack;

    for (char ch : s) {
        if (ch == '(' || ch == '{' || ch == '[') {
            stack.push(ch);
        } else if (!stack.empty() &&
                   ((ch == ')' && stack.top() == '(') ||
                    (ch == '}' && stack.top() == '{') ||
                    (ch == ']' && stack.top() == '['))) {
            stack.pop();
        } else {
            return false; // Unmatched or mismatched parentheses
        }
    }

    return stack.empty(); // Check if all parentheses are matched
}

int main() {
    string parenthesesString = "{[()]}";

    if (isValidParentheses(parenthesesString)) {
        cout << "The parentheses are valid.\n";
    } else {
        cout << "The parentheses are not valid.\n";
    }

    return 0;
}
