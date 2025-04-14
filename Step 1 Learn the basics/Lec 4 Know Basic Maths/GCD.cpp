#include <iostream>
using namespace std;

int findGCD(int a, int b)
{
    for (int i = min(a, b); i > 0; i--)
    {
        if (a % i == 0 && b % i == 0)
            return i;
    }
}

int main()
{
    int n1, n2;
    cout << "Enter two numbers: ";
    cin >> n1 >> n2;
    cout << findGCD(n1, n2) << endl;
    return 0;
}

// Time Complexity: O(min(n1,n2))
// Space Complexity: O(1)