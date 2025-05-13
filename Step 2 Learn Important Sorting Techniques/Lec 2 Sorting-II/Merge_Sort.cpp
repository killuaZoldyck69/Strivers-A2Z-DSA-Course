#include <iostream>
#include <vector>
using namespace std;

void arrayInput(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
}

void arrayPrint(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

void merge(int arr[], int low, int mid, int high)
{
    vector<int> temp;
    int left = low;
    int right = mid + 1;

    // storing elements in the temporary array in a sorted manner//
    while (left <= mid && right <= high)
    {
        if (arr[left] <= arr[right])
        {
            temp.push_back(arr[left]);
            left++;
        }
        else
        {
            temp.push_back(arr[right]);
            right++;
        }
    }

    // if elements on the left half are still left //
    while (left <= mid)
    {
        temp.push_back(arr[left]);
        left++;
    }

    //  if elements on the right half are still left //
    while (right <= high)
    {
        temp.push_back(arr[right]);
        right++;
    }

    // transfering all elements from temporary to arr //
    for (int i = low; i <= high; i++)
    {
        arr[i] = temp[i - low];
    }
}

void merge_sort(int arr[], int low, int high)
{
    if (low == high)
        return;

    int mid = (low + high) / 2;
    merge_sort(arr, low, mid);
    merge_sort(arr, mid + 1, high);
    merge(arr, low, mid, high);
}

int main()
{
    int size;
    cout << "Enter the array size: ";
    cin >> size;
    int arr[size];
    arrayInput(arr, size);
    merge_sort(arr, 0, size - 1);
    arrayPrint(arr, size);
    return 0;
}

// Time Complexity: O(n log n)
// Space Complexity: O(n)