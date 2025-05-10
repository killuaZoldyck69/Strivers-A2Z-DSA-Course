#include <iostream>
#include <algorithm>
using namespace std;

void insertionSort(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int j = i;
        while (j > 0 && arr[j - 1] > arr[j])
        {
            swap(arr[j - 1], arr[j]);
            j--;
        }
    }
}

int main()
{
    int size;
    cout << "Enter the array size: ";
    cin >> size;
    int arr[size];
    for (int i = 0; i < size; i++)
        cin >> arr[i];
    insertionSort(arr, size);
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    return 0;
}

// Time Complexity (worst): O(n^2)
// Time Complexity (best): O(n^2)
// Space Complexity: O(1)