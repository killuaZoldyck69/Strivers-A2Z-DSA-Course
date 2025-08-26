#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// array input
void arrayInput(vector<int> &arr)
{
    for (int &ele : arr)
    {
        cin >> ele;
    }
}

// find longest consecutive squence
int longest_Consecutive_Sequence(vector<int> &nums)
{
    sort(nums.begin(), nums.end());
    int longest = 1;
    int count = 1;
    for (int i = 0; i < nums.size() - 1; i++)
    {
        if (nums[i + 1] == nums[i] + 1)
        {
            count++;
        }
        else if (nums[i + 1] != nums[i])
        {
            count = 1;
        }
        longest = max(longest, count);
    }
    return longest;
}

int main()
{
    int size;
    cout << "Enter the array size:  ";
    cin >> size;
    vector<int> nums(size);
    arrayInput(nums);
    cout << longest_Consecutive_Sequence(nums) << endl;
    return 0;
}

// Time Complexity: O(nlogn) + O(n)
// Space Complexity: O(1)