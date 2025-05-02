#include <iostream>
using namespace std;

void countFrequecy(string s, int hash[])
{
    for (int i = 0; i < s.length(); i++)
    {
        hash[s[i]]++;
    }

    for (int i = 0; i < s.length(); i++)
    {
        cout << s[i] << " --> " << hash[s[i]] << endl;
    }
}

int main()
{
    string str;
    cout << "Enter the string: ";
    cin >> str;
    int hash[256] = {0};
    countFrequecy(str, hash);
    return 0;
}