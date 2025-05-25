#include <iostream>
#include <vector>
using namespace std;

void arrayInput(vector<int> &arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        int ele;
        cin >> ele;
        arr.push_back(ele);
    }
}

void arrayPrint(vector<int> &arr)
{
    for (int ele : arr)
    {
        cout << ele << " ";
    }
}

int maxElement(vector<int> &arr)
{
    int max = INT32_MIN;
    for (int ele : arr)
    {
        if (max < ele)
        {
            max = ele;
        }
    }
    return max;
}

int main()
{
    int size;
    cout << "Enter the array size: ";
    cin >> size;
    vector<int> arr;
    arrayInput(arr, size);
    cout << maxElement(arr) << endl;
    return 0;
}

// Time Complexity: O(N)
// Space Complexity: O(1)