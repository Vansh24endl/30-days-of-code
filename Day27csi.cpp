#include <iostream>
#include <bits/stdc++.h>
using namespace std;
bool are_Distinct(string str, int i, int j);
int longest_Unique_Substr(string str);
int main() {
    string str = "Vanshdhumal";
    cout << "The input string is " << str<<endl;
    int len = longest_Unique_Substr(str);
    cout << "The length of the longest non-repeating character substring is: " << len;
    return 0;
}
bool are_Distinct(string str, int i, int j) {
    vector<bool> visited(256);
    for (int k = i; k <= j; k++) {
        if (visited[str[k]] == true)
            return false;
        visited[str[k]] = true;
    }
    return true;
}
int longest_Unique_Substr(string str) {
    int n =str.size();
    int result=0;
    for (int i = 0; i <n; i++) {
        for (int j = i; j <n; j++) {
            if (are_Distinct(str, i, j))
                result = max(result, j -i +1);
        }
    }
    return result;
}￼Enter
