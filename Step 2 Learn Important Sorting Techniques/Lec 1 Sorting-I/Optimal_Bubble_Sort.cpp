#include <iostream>
#include <algorithm>
using namespace std;

void optimize_bubbleSort(int arr[], int n)
{
    for (int i = 1; i <= n - 1; i++)
    {
        int didSwap = 0;
        for (int j = 0; j < n - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                didSwap = 1;
            }
        }
        if (didSwap == 0)
        {
            break;
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

    optimize_bubbleSort(arr, size);
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    return 0;
}

// Time Complexity (worst): O(n^2)
// Time Complexity (best): O(n)
// Space Complexity: O(1)