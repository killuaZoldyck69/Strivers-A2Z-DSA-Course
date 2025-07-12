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

vector<int> twoSum(vector<int> &nums, int target)
{
    map<int, int> mpp;
    for (int i = 0; i < nums.size(); i++)
    {
        int rem = target - nums[i];
        if (mpp.find(rem) != mpp.end())
        {
            return {i, mpp[rem]};
        }
        mpp[nums[i]] = i;
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

// Time Complexity: O(n log n)
// Space Complexity: O(n)