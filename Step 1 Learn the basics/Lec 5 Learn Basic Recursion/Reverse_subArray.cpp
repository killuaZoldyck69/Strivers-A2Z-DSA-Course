#include <iostream>
#include <vector>
using namespace std;

void arrayInput(vector<int> &arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
}

void arrayPrint(vector<int> &arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

void reverseSubArray(vector<int> &arr, int m)
{
    int subArraySize = arr.size() - m - 1;
    for (int i = m + 1; i <= subArraySize / 2 + m; i++)
    {
        // cout << i << " " << arr[i] << " " << arr[arr.size() - i + m] << endl;
        swap(arr[i], arr[arr.size() - i + m]);
    }
}

int main()
{
    int arraySize, m;
    cout << "Enter array size and value of m: ";
    cin >> arraySize >> m;
    vector<int> array(arraySize);
    arrayInput(array, arraySize);
    reverseSubArray(array, m);
    arrayPrint(array, arraySize);
    return 0;
}