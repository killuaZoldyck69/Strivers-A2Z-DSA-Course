#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void arrayInput(vector<int> &arr)
{
    for (int &ele : arr)
    {
        cin >> ele;
    }
}

bool twoSum(vector<int> &nums, int target)
{
    sort(nums.begin(), nums.end());
    int left = 0;
    int right = nums.size() - 1;
    while (left < right)
    {
        if (nums[left] + nums[right] == target)
        {
            return true;
        }
        else if (nums[left] + nums[right] < target)
        {
            left++;
        }
        else if (nums[left] + nums[right] > target)
        {
            right++;
        }
    }
    return false;
}

int main()
{
    int size, target;
    cout << "Enter the array size and target: ";
    cin >> size >> target;
    vector<int> arr(size);
    arrayInput(arr);
    cout << twoSum << endl;
    return 0;
}

// Time Complexity:O(n) + O(n log n)
// Space Complexity: O(1)