#include <iostream>
using namespace std;

void printNTo1(int n)
{
    if (n == 0)
        return;
    cout << n << endl;
    printNTo1(n - 1);
}

int main()
{
    int n;
    cout << "Enter the number: ";
    cin >> n;
    printNTo1(n);
    return 0;
}