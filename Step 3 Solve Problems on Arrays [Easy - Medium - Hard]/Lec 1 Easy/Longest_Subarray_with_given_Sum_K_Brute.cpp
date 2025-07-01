#include <iostream>
#include <vector>
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
    int n = nums.size();
    int length = 0;
    for (int i = 0; i < n; i++)
    {
        long long int sum = 0;

        for (int j = i; j < n; j++)
        {
            sum += nums[j];
            if (sum == k)
            {
                length = max(length, j - i + 1);
            }
        }
    }
    return length;
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

// Time Complexity: O(n^2)
// Space Complexity: O(1)