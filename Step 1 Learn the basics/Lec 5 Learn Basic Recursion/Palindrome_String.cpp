#include <iostream>
#include <string>
using namespace std;

bool isPalindromeString(string s)
{
    for (int i = 0; i <= s.length() / 2; i++)
    {
        if (s[i] != s[s.length() - i - 1])
            return false;
    }
    return true;
}

int main()
{
    string str;
    cout << "Enter the string: ";
    cin >> str;
    cout << isPalindromeString(str) << endl;
    return 0;
}