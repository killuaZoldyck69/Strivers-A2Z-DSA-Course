#include <iostream>
#include <vector>
using namespace std;

void arrayInput(vector<int> &arr)
{
    for (int &ele : arr)
    {
        cin >> ele;
    }
}

int findMissingNum(vector<int> &a)
{
    int n = a.size();
    int xor1 = 0;
    int xor2 = 0;
    for (int i = 0; i < n; i++)
    {
        xor2 = xor2 ^ a[i];
        xor1 = xor1 ^ i;
    }
    xor1 = xor1 ^ n;
    return xor1 ^ xor2;
}

int main()
{
    int size;
    cout << "Enter the array size: ";
    cin >> size;
    vector<int> arr(size);
    arrayInput(arr);
    cout << findMissingNum(arr) << endl;
    return 0;
}

// Time Complexity: O(n)
// Space Complexity: O(1)