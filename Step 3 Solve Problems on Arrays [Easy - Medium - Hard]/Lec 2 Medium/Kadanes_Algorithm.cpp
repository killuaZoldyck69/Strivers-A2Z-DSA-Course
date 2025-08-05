#include <iostream>
#include <vector>
using namespace std;

// array input
void arrayInput(vector<int> &nums)
{
    for (int &ele : nums)
    {
        cin >> ele;
    }
}

// kandanes algorithm
int maximumSubarraySum(vector<int> &nums)
{
    int maxSum = INT32_MIN;

    for (int i = 0; i < nums.size(); i++)
    {
        int sum = 0;
        for (int j = i; j < nums.size(); j++)
        {
            sum += nums[j];
            maxSum = max(maxSum, sum);
        }
    }
    return maxSum;
}

int main()
{
    int size;
    cout << "Enter the array size: ";
    cin >> size;
    vector<int> nums(size);
    arrayInput(nums);
    cout << maximumSubarraySum(nums) << endl;
    return 0;
}

// Time Complexity: O(n^2)
// Space Complexity: O(1)