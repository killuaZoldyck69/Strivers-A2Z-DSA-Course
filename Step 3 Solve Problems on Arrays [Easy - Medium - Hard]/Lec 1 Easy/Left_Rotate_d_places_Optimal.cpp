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

void left_rotate_d_places(vector<int> &arr, int d)
{
    d = d % arr.size();
    reverse(arr.begin(), arr.begin() + d);
    reverse(arr.begin() + d, arr.end());
    reverse(arr.begin(), arr.end());
}

int main()
{
    int size, d;
    cout << "Enter the array size and d: ";
    cin >> size >> d;
    vector<int> arr(size);
    arrayInput(arr);
    left_rotate_d_places(arr, d);
    arrayPrint(arr);
    return 0;
}

// Time Compexity: O(n)
// Space Compexity: O(1)  rotation algorithm