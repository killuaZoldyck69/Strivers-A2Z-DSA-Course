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

void arrayPrint(vector<int> &arr)
{
    for (int ele : arr)
    {
        cout << ele << " ";
    }
}

vector<int> twoSum(vector<int> &nums, int target)
{
    for (int i = 0; i < nums.size(); i++)
    {
        for (int j = i + 1; j < nums.size(); j++)
        {
            if (nums[i] + nums[j] == target)
            {
                return {i, j};
            }
        }
    }
    return {-1, -1};
}
int main()
{
    int size, target;
    cout << "Enter the array size and target: ";
    cin >> size >> target;
    vector<int> arr(size);
    arrayInput(arr);
    vector<int> result = twoSum(arr, target);
    arrayPrint(result);
    return 0;
}

// Time Complexity: O(n^2)
// Space Complexity: O(1)