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

bool isSorted(vector<int> &arr)
{
    for (int i = 0; i < arr.size() - 1; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int size;
    cout << "Enter the array size: ";
    cin >> size;
    vector<int> arr(size);
    arrayInput(arr);
    cout << isSorted(arr);
    return 0;
}

// Time Complexity: O(n)
// Space Complexity: O(1) [isSorted() function]
// Space Complexity: O(n) [Whole program (with vector)]