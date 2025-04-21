#include <iostream>
using namespace std;

int sumOfNnaturalNumbers(int n)
{
    if (n < 1)
        return 0;
    return n + sumOfNnaturalNumbers(n - 1);
}

int main()
{
    int n;
    cout << "Enter the number: ";
    cin >> n;
    cout << sumOfNnaturalNumbers(n) << endl;
    return 0;
}