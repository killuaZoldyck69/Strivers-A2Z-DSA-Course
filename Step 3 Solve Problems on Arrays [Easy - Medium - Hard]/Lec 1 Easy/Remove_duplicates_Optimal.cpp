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

void arrayPrint(vector<int> &arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int removeDuplicates(vector<int> &arr)
{
    int i = 0;
    for (int j = 1; j < arr.size(); j++)
    {
        if (arr[i] != arr[j])
        {
            arr[++i] = arr[j];
        }
    }
    return i + 1;
}

int main()
{
    int size;
    cout << "Enter the array size: ";
    cin >> size;
    vector<int> arr(size);
    arrayInput(arr);
    int k = removeDuplicates(arr);
    arrayPrint(arr, k);
    return 0;
}

// Time Complexity: O(N)
// Space Complexity: O(1)