#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

void arrayInput(vector<int> &arr)
{
    for (int &ele : arr)
    {
        cin >> ele;
    }
}

int findSingleNumber(vector<int> &nums)
{
    unordered_map<int, int> mpp;

    for (int ele : nums)
    {
        mpp[ele]++;
    }

    for (auto it : mpp)
    {
        if (it.second == 1)
        {
            return it.first;
        }
    }
}

int main()
{
    int size;
    cout << "Enter the array size: ";
    cin >> size;
    vector<int> arr(size);
    arrayInput(arr);
    cout << findSingleNumber(arr) << endl;
    return 0;
}

// Time Complexity: O(N log M) + O((N/2)+1) --> M is size of the map
// O(N log M) = (N/2)+1 can be vary
// Space Complexity: O((N/2)+1)