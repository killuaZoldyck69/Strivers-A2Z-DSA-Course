#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void printAllDivisors(int n)
{
    vector<int> divisors;
    for (int i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            divisors.push_back(i);
            if (n / i != i)
                divisors.push_back(n / i);
        }
    }
    sort(divisors.begin(), divisors.end());
    for (int ele : divisors)
    {
        cout << ele << " ";
    }
}

int main()
{
    int num;
    cout << "Enter the number: ";
    cin >> num;
    printAllDivisors(num);
    return 0;
}

// Time Complexity: O(sqrt(N))
// Space Complexity: O(2*sqrt(N))