#include <iostream>
using namespace std;

void print1ToN(int i, int n)
{
    if (i > n)
        return;
    cout << i << endl;
    print1ToN(i + 1, n);
}

int main()
{
    int i = 1, n;
    cout << "Enter the number: ";
    cin >> n;
    print1ToN(i, n);
    return 0;
}