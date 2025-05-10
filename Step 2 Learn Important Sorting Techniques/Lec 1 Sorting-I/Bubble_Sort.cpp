#include <iostream>
#include <algorithm>
using namespace std;

void bubbleSort(int arr[], int n)
{
    for (int i = 1; i <= n - 1; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
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

    bubbleSort(arr, size);
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    return 0;
}

// Time Complexity: O(n^2)
// Space Complexity: O(1)