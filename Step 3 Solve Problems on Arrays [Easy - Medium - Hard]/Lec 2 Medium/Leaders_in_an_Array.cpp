#include <iostream>
#include <vector>
using namespace std;

// array input
void arrayInput(vector<int> &arr)
{
    for (int &ele : arr)
    {
        cin >> ele;
    }
}

// array print
void arrayPrint(vector<int> &arr)
{
    for (int ele : arr)
    {
        cout << ele << " ";
    }
}

// find leaders in an array
vector<int> leadersInArray(vector<int> &arr)
{
    vector<int> leaders;
    int max = INT32_MIN;
    for (int i = arr.size() - 1; i >= 0; i--)
    {
        if (arr[i] > max)
        {
            max = arr[i];
            leaders.push_back(arr[i]);
        }
    }
    return leaders;
}

int main()
{
    int size;
    cout << "Enter the array size:  ";
    cin >> size;
    vector<int> nums(size);
    arrayInput(nums);
    vector<int> ans = leadersInArray(nums);
    arrayPrint(ans);
    return 0;
}

// Time Complexity: O(n)
// Space Complexity: O(n)