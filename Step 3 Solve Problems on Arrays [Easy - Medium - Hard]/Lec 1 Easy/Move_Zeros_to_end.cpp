#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void arrayInput(vector<int> &arr)
{
    for (int &ele : arr)
    {
        cin >> ele;
    }
}

void arrayPrint(vector<int> &arr)
{
    for (int ele : arr)
    {
        cout << ele << " ";
    }
}

void moveZeros(vector<int> &arr)
{
    int j = -1;
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] == 0)
        {
            j = i;
            break;
        }
    }

    if (j == -1)
        return;

    for (int i = j + 1; i < arr.size(); i++)
    {
        if (arr[j] != arr[i])
        {
            swap(arr[j], arr[i]);
            j++;
        }
    }
}
int main()
{
    int size;
    cout << "Enter the array size: ";
    cin >> size;
    vector<int> arr(size);
    arrayInput(arr);
    moveZeros(arr);
    arrayPrint(arr);
    return 0;
}

// Time Complexity: O(n)
// Space Complexity: O(1)