#include <iostream>
using namespace std;

int countDigits(int n)
{
    int count = 0;
    while (n > 0)
    {
        n = n / 10;
        count++;
    }
    return count;
}

int main()
{
    int num;
    cout << "Enter the number: ";
    cin >> num;
    cout << countDigits(num) << endl;
    return 0;
}