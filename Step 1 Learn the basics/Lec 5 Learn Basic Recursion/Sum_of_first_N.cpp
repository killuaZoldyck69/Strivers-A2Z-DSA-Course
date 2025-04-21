#include <iostream>
using namespace std;

int sumOfNnaturalNumbers(int n, int sum)
{
    if (n < 1)
        return sum;
    sumOfNnaturalNumbers(n - 1, sum + n);
}

int main()
{
    int n;
    cout << "Enter the number: ";
    cin >> n;
    cout << sumOfNnaturalNumbers(n, 0) << endl;
    return 0;
}