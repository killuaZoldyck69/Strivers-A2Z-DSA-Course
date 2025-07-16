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

// Moore's Voting Algorithm
int majorityElement(vector<int> &nums)
{
    int count = 0;
    int ele;
    for (int i = 0; i < nums.size(); i++)
    {
        if (count == 0)
        {
            ele = nums[i];
            count++;
        }
        else if (nums[i] == ele)
        {
            count++;
        }
        else if (nums[i] != ele)
        {
            count--;
        }
    }

    int count1 = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] == ele)
        {
            count1++;
        }
    }
    if (count1 > (nums.size() / 2))
    {
        return ele;
    }
    return -1;
}

int main()
{
    int size;
    cout << "Enter the array size: ";
    cin >> size;
    vector<int> arr(size);
    arrayInput(arr);
    cout << majorityElement(arr) << endl;
    return 0;
}

// Time Complexity:O(n) + O(n) --> if array is not guaranteed to majority element
// Space Complexity: O(1)