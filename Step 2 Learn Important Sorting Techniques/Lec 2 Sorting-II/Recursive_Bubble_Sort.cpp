#include <iostream>
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

bool bubble(int arr[], int n)
{
    bool didSwap = false;
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            swap(arr[i], arr[i + 1]);
            didSwap = true;
        }
    }
    return didSwap;
}

void bubble_sort(int arr[], int n)
{
    if (n == 1)
    {
        return;
    }
    if (!bubble(arr, n))
        return;
    bubble_sort(arr, n - 1);
}

int main()
{
    int size;
    cout << "Enter the array size: ";
    cin >> size;
    int arr[size];
    arrayInput(arr, size);
    bubble_sort(arr, size);
    arrayPrint(arr, size);
    return 0;
}

// Time Complexity (Worst): O(n^2)
// Time Complexity (Best): O(n)
// Space Complexity: O(n)