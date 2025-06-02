#include <iostream>
#include <vector>
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
    vector<int> temp;
    d = d % arr.size();
    for (int i = 0; i < d; i++)
    {
        temp.push_back(arr[i]);
    }

    for (int i = d; i < arr.size(); i++)
    {
        arr[i - d] = arr[i];
    }

    for (int i = arr.size() - d; i < arr.size(); i++)
    {
        arr[i] = temp[i + d - arr.size()];
    }
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
// Space Compexity: O(d)  since d array element needs to be stored in temp array