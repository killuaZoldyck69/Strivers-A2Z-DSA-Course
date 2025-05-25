#include <iostream>
#include <vector>
#include <set>
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

int removeDuplicates(vector<int> &arr)
{
    set<int> s;
    for (int i = 0; i < arr.size(); i++)
    {
        s.insert(arr[i]);
    }
    int i = 0;
    for (auto ele : s)
    {
        arr[i++] = ele;
    }

    return s.size();
}

int main()
{
    int size;
    cout << "Enter the array size: ";
    cin >> size;
    vector<int> arr(size);
    arrayInput(arr);
    cout << removeDuplicates(arr) << endl;
    arrayPrint(arr);
    return 0;
}

// Time complexity: O(n*log(n))+O(n)
// Space Complexity: O(n)