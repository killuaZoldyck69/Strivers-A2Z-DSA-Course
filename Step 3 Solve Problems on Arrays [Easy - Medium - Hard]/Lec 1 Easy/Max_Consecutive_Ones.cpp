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

int findMaxConsecutiveOnes(vector<int> &nums)
{
    int count = 0;
    int maxi = 0;
    for (int ele : nums)
    {
        if (ele == 1)
        {
            count++;
            maxi = max(maxi, count);
        }
        else
        {
            count = 0;
        }
    }
    return maxi;
}

int main()
{
    int size;
    cout << "Enter the array size: ";
    cin >> size;
    vector<int> arr(size);
    arrayInput(arr);
    cout << findMaxConsecutiveOnes(arr) << endl;
    return 0;
}

// Time Complexity: O(N)
// Space Complexity: O(1)