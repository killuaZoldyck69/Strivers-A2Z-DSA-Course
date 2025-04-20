#include <iostream>
using namespace std;

void printNTo1BackTracing(int i, int n)
{
    if (i > n)
        return;
    printNTo1BackTracing(i + 1, n);
    cout << i << endl;
}

int main()
{
    int i = 1, n;
    cout << "Enter the number: ";
    cin >> n;
    printNTo1BackTracing(i, n);
    return 0;
}