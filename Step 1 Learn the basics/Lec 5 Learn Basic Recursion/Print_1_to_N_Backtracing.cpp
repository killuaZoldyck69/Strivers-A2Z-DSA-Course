#include <iostream>
using namespace std;

void print1ToNBacktracing(int i, int n)
{
    if (i < 1)
        return;
    print1ToNBacktracing(i - 1, n);
    cout << i << endl;
}

int main()
{
    int n;
    cout << "Enter the number: ";
    cin >> n;
    print1ToNBacktracing(n, n);
    return 0;
}