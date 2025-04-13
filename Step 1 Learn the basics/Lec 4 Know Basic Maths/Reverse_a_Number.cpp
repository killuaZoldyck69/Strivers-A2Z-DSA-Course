#include <iostream>
using namespace std;

int reverseNumber(int n)
{
    int revNum = 0;
    while (n != 0)
    {
        int remainder = n % 10;
        revNum = revNum * 10 + remainder;
        n = n / 10;
    }
    return revNum;
}

int main()
{
    int num;
    cout << "Enter the number: ";
    cin >> num;
    cout << reverseNumber(num) << endl;
    return 0;
}