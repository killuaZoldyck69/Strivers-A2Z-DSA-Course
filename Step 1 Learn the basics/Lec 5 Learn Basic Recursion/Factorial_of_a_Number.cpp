#include <iostream>
using namespace std;

int factorialOfaNumber(int n)
{
    if (n == 0)
        return 1;
    return n * factorialOfaNumber(n - 1);
}

int main()
{
    int num;
    cout << "Enter the number: ";
    cin >> num;
    cout << factorialOfaNumber(num) << endl;
    return 0;
}