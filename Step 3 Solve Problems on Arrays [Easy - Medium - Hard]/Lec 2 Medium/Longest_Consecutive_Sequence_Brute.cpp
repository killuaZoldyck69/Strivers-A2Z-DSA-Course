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
    int longest = 0;
    int count;
    for (int i = 0; i < nums.size(); i++)
    {
        count = 1;
        bool found = true;
        int target = nums[i] + 1;
        auto it = find(nums.begin(), nums.end(), target);
        while (it != nums.end())
        {
            count++;
            target++;
            it = find(nums.begin(), nums.end(), target);
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

// Time Complexity: O(n^3)
// Space Complexity: O(1)