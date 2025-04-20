#include <iostream>
using namespace std;

void printNameNTimes(int n)
{
    if (n == 0)
        return;
    cout << "Nahid Hasan" << endl;
    printNameNTimes(n - 1);
}

int main()
{
    int num;
    cout << "Enter the number: ";
    cin >> num;
    printNameNTimes(num);
    return 0;
}

// Time Complexity: O(N)
// Space Complexity: O(N)