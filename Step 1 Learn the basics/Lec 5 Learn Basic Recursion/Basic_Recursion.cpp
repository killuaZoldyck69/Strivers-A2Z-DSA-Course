#include <iostream>
using namespace std;

int number = 1;
void printNTimesByRecursion(int n)
{
    if (number > n)
        return;
    cout << number << endl;
    number++;
    printNTimesByRecursion(n);
}

int main()
{
    int n;
    cout << "Enter the number: ";
    cin >> n;
    printNTimesByRecursion(n);
    return 0;
}