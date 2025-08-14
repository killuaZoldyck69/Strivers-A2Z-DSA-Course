#include <iostream>
#include <vector>
#include <algorithm>
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

// find next permutation
void nextPermutation(vector<int> &arr)
{
    int n = arr.size();
    int pivot = -1;

    // setp 1: find the break point or pivot
    for (int i = n - 2; i >= 0; i--)
    {
        if (arr[i] < arr[i + 1])
        {
            pivot = i;
        }
    }

    if (pivot == -1)
    {
        reverse(arr.begin(), arr.end());
        return;
    }

    // step 2: find the lowest greater element then the pivot
    for (int i = n - 1; i > pivot; i--)
    {
        if (arr[pivot] < arr[i])
        {
            swap(arr[pivot], arr[i]);
            break;
        }
    }

    // step 3: reverse the entire right half after the pivot
    int i = pivot + 1;
    int j = n - 1;
    while (i < j)
    {
        swap(arr[i++], arr[j--]);
    }
}

int main()
{
    int size;
    cout << "Enter the array size: ";
    cin >> size;
    vector<int> nums(size);
    arrayInput(nums);
    nextPermutation(nums);
    arrayPrint(nums);
    return 0;
}

// Time Complexity : O(3n)
// Space Complexity : O(1)