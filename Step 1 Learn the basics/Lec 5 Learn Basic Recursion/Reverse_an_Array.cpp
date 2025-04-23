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

void reverseArray(int arr[], int i, int n)
{
    if (i >= n / 2)
        return;
    swap(arr[i], arr[n - i - 1]);
    return reverseArray(arr, i + 1, n);
}

int main()
{
    int size;
    cout << "Enter the size of array: ";
    cin >> size;
    int array[size];
    arrayInput(array, size);
    reverseArray(array, 0, size);
    arrayPrint(array, size);
    return 0;
}