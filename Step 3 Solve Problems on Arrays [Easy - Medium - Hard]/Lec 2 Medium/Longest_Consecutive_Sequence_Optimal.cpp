#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_set>
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
    int longest = 1;
    unordered_set<int> st;
    for (int i = 0; i < nums.size(); i++)
    {
        st.insert(nums[i]);
    }

    for (auto it : st)
    {
        if (st.find(it - 1) == st.end())
        {
            int count = 1;
            int x = it;
            while (st.find(x + 1) != st.end())
            {
                count++;
                x = x + 1;
            }
            longest = max(longest, count);
        }
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

// Time Complexity: O(3n)
// Space Complexity: O(n)