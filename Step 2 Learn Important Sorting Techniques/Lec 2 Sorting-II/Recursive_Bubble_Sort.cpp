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

void bubble(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            swap(arr[i], arr[i + 1]);
        }
    }
}

void bubble_sort(int arr[], int n)
{
    if (n == 1)
    {
        return;
    }
    bubble(arr, n);
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

// Time Complexity: O(n^2)
// Space Complexity: O(n)