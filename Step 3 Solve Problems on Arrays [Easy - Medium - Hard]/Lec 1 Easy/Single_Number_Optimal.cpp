#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

void arrayInput(vector<int> &arr)
{
    for (int &ele : arr)
    {
        cin >> ele;
    }
}

int findSingleNumber(vector<int> &nums)
{
    int result = 0;
    for (int ele : nums)
    {
        result ^= ele;
    }
    return result;
}

int main()
{
    int size;
    cout << "Enter the array size: ";
    cin >> size;
    vector<int> arr(size);
    arrayInput(arr);
    cout << findSingleNumber(arr) << endl;
    return 0;
}

// Time Complexity: O(N)
// Space Complexity: O(1)