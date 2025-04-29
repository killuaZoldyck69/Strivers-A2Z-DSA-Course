#include <iostream>
using namespace std;

int nthFibonacci(int n)
{
    if (n <= 1)
    {
        return n;
    }
    int last = nthFibonacci(n - 1);
    int secondLast = nthFibonacci(n - 2);
    return last + secondLast;
}

int main()
{
    int num;
    cout << "Enter the nubmer: ";
    cin >> num;
    cout << nthFibonacci(num) << endl;
    return 0;
}

// Time Complexity: O(2^N)
// Space Complexity: O(N)