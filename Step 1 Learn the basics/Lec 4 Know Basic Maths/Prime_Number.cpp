#include <iostream>
using namespace std;

string checkPrime(int n)
{
    int count = 0;
    for (int i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            count++;
            if (n / i != i)
                count++;
        }
    }
    if (count == 2)
        return "true";
    return "false";
}

int main()
{
    int num;
    cout << "Enter the number: ";
    cin >> num;
    cout << checkPrime(num);
    return 0;
}

// Time Complexity: O(sqrt(N))
// Space Complexity: O(1)