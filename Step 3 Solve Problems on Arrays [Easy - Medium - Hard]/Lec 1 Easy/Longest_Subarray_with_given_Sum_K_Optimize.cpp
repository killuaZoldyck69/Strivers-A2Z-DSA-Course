#include <iostream>
#include <vector>
#include <map>
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

int getLongestSubarray(vector<int> &nums, long long int k)
{
    int left, right;
    left = right = 0;
    long long int sum = nums[0];
    int n = nums.size();
    int maxLen = 0;
    while (right < n)
    {
        while (left <= right && sum > k)
        {
            sum -= nums[left];
            left++;
        }

        if (sum == k)
        {
            maxLen = max(maxLen, right - left + 1);
        }

        right++;
        if (right < n)
        {
            sum += nums[right];
        }
    }
    return maxLen;
}

int main()
{

    int size, k;
    cout << "Enter the array size and k: ";
    cin >> size >> k;
    vector<int> arr(size);
    arrayInput(arr);
    cout << getLongestSubarray(arr, k) << endl;
    return 0;
}

// Time Complexity: O(2n)
// Space Complexity: O(1)