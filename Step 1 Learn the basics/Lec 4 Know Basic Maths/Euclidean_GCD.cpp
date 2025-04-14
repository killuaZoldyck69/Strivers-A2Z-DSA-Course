#include <iostream>
using namespace std;

int euclideanGCD(int a, int b)
{
    while (a > 0 && b > 0)
    {
        if (a > b)
            a = a % b;
        else
            b = b % a;
    }
    if (a == 0)
        return b;
    return a;
}

int main()
{
    int n1, n2;
    cout << "Enter two numbers: ";
    cin >> n1 >> n2;
    cout << euclideanGCD(n1, n2) << endl;
    return 0;
}

// Time Complexity: O(log(min(n1,n2)))
// Space Complexity: O(1)