#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void vectorInput(vector<int> &arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        int ele;
        cin >> ele;
        arr.push_back(ele);
    }
}

void vectorPrint(vector<int> &arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

void insertion_sort(vector<int> &arr, int s, int n)
{
    if (s == n - 1)
    {
        return;
    }
    int j = s + 1;
    while (j > 0 && arr[j] < arr[j - 1])
    {
        swap(arr[j], arr[j - 1]);
        j--;
    }
    insertion_sort(arr, s + 1, n);
}

int main()
{
    int size;
    cout << "Enter the array size: ";
    cin >> size;
    vector<int> arr;
    vectorInput(arr, size);
    insertion_sort(arr, 0, size);
    vectorPrint(arr, size);
}

// Time Complexity (Worst): O(n^2)
// Time Complexity (Best): O(n)
// Space Complexity: O(n)