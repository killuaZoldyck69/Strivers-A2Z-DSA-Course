#include <iostream>
using namespace std;

bool isAlphaNumaric(char c)
{
    if (c >= 'A' && c <= 'Z' || c >= 'a' && c <= 'z' ||
        c >= '0' && c <= '9')
        return true;
    return false;
}

bool isPalindrome(string s)
{
    int start = 0;
    int end = s.length() - 1;
    if (s == " ")
        return true;
    else
    {
        while (start <= end)
        {
            if (!isAlphaNumaric(s[start]))
            {
                start++;
                continue;
            }
            if (!isAlphaNumaric(s[end]))
            {
                end--;
                continue;
            }
            if (tolower(s[start]) != tolower(s[end]))
            {
                cout << start << " " << end << endl;
                cout << s[start] << " " << s[end] << endl;
                return false;
            }
            else
            {
                start++;
                end--;
            }
        }
        return true;
    }
}

int main()
{
    string str;
    cout << "Enter the string: ";
    getline(cin, str);
    cout << isPalindrome(str) << endl;
    return 0;
}