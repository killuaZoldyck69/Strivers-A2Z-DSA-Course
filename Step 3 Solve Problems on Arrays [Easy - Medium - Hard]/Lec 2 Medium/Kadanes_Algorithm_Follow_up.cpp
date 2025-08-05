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
    int sum = 0;
    int ansStart, ansEnd, start;
    ansStart = ansEnd = -1;

    for (int i = 0; i < nums.size(); i++)
    {
        if (sum == 0)
        {
            ansStart = i;
        }
        sum += nums[i];
        if (sum > maxSum)
        {
            maxSum = sum;
            ansEnd = i;
        }
        if (sum < 0)
        {
            sum = 0;
        }
    }

    // print maximum sum subarray
    for (int i = ansStart; i <= ansEnd; i++)
    {
        cout << nums[i] << " ";
    }
    cout << endl;

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

// Time Complexity: O(n)
// Space Complexity: O(1)