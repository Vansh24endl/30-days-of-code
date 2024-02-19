#include <iostream>
#include <unordered_map>
using namespace std;

int non_repeating(string s);

int main()
{
    string s1 = "computersocietyofindia";
    string s2 = "codechallange";
    string s3 = "svvv";
    cout << non_repeating(s2) << endl; 
    cout << non_repeating(s3) << endl;  // return -1
    cout << non_repeating(s1) << endl;
    return 0;
}
int non_repeating(string s)
{
    unordered_map<char, int> fr;
    for (char c : s)
    {
        fr[c]++;
    }
    for (int i = 0; i < sizeof(s); i++)
    {
        if (fr[s[i]] == 1)
        {
            return i;
        }
    }
    return -1;
}
