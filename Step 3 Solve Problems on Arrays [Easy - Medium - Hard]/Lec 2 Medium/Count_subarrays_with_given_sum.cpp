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

int countSubarray(vector<int> &nums, long long int k)
{
    int count = 0;
    long long int sum = 0;
    map<long long int, int> preSumMap;
    for (int i = 0; i < nums.size(); i++)
    {
        sum += nums[i];
        if (sum == k)
        {
            count++;
        }
        long long int rem = sum - k;
        if (preSumMap.find(rem) != preSumMap.end())
        {
            count += preSumMap[rem];
        }
        preSumMap[sum]++;
    }
    return count;
}

int main()
{

    int size, k;
    cout << "Enter the array size and k: ";
    cin >> size >> k;
    vector<int> arr(size);
    arrayInput(arr);
    cout << countSubarray(arr, k) << endl;
    return 0;
}

// Time Complexity: O(n log n)
// Space Complexity: O(n)