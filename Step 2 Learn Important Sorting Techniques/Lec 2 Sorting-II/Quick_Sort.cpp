#include <iostream>
#include <algorithm>
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

int Partition(int arr[], int l, int h)
{
    int pivot = arr[l];
    int i = l;
    int j = h;
    while (i < j)
    {
        while (arr[i] <= pivot && i <= h - 1)
        {
            i++;
        }
        while (arr[j] > pivot && j >= l + 1)
        {
            j--;
        }
        if (i < j)
            swap(arr[i], arr[j]);
    }
    swap(arr[l], arr[j]);
    return j;
}

void quick_sort(int arr[], int l, int h)
{
    if (l < h)
    {
        int j = Partition(arr, l, h);
        quick_sort(arr, l, j - 1);
        quick_sort(arr, j + 1, h);
    }
    return;
}

int main()
{
    int size;
    cout << "Enter the array size: ";
    cin >> size;
    int arr[size];
    arrayInput(arr, size);
    quick_sort(arr, 0, size - 1);
    arrayPrint(arr, size);
    return 0;
}

// Time Complexity (Best & Average): O(n log n)
// Time Complexity (worst): O(n^2)
// Space Complexity: O(n)