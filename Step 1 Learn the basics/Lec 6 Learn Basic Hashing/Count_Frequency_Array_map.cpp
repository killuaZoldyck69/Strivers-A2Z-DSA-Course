#include <iostream>
#include <map>
using namespace std;

void arrayInput(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
}

void countFrequency(map<int, int> &m, int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        m[arr[i]]++;
    }
}

int main()
{
    int size;
    cout << "Enter the array size: ";
    cin >> size;
    int arr[size];
    arrayInput(arr, size);

    map<int, int> m;

    countFrequency(m, arr, size);
    for (auto it : m)
    {
        cout << it.first << " --> " << it.second << endl;
    }
    return 0;
}

// Time Complexity: O(n log n)
// Space Complexity: O(n)