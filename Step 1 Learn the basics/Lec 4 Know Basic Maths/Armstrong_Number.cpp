#include <iostream>
#include <cmath>
using namespace std;

int countDigits(int n)
{
    int count = 0;
    while (n > 0)
    {
        n = n / 10;
        count++;
    }
    return count;
}

bool isArmstrong(int n)
{
    int digits = countDigits(n);
    int num = n;
    int sum = 0;
    while (num > 0)
    {
        int remainder = num % 10;
        sum = sum + pow(remainder, digits); // pow function problem to my complier
        num = num / 10;
    }
    if (sum == n)
        return true;
    return false;
}

int main()
{
    int num;
    cout << "Enter the number: ";
    cin >> num;
    cout << isArmstrong(num) << endl;
    return 0;
}

// Time Complexity: O(log₁₀(n)+1)
// Space Complexity: O(1)