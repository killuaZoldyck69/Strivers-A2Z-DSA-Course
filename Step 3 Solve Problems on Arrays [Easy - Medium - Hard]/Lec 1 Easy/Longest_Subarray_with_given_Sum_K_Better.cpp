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
    long long int sum = 0;
    int maxLen = 0;
    map<long long int, int> preSumMap;
    for (int i = 0; i < nums.size(); i++)
    {
        sum += nums[i];
        if (sum == k)
        {
            maxLen = max(maxLen, i + 1);
        }
        long long int rem = sum - k;
        if (preSumMap.find(rem) != preSumMap.end())
        {
            int len = i - preSumMap[rem];
            maxLen = max(maxLen, len);
        }
        if (preSumMap.find(sum) == preSumMap.end())
        {
            preSumMap[sum] = i;
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

// Time Complexity: O(n log n)
// Space Complexity: O(n)