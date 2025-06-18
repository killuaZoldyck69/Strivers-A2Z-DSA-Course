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

int findMissingNum(vector<int> &a)
{
    vector<int> hash(a.size() + 1);
    for (int ele : a)
    {
        hash[ele]++;
    }
    for (int i = 0; i < hash.size(); i++)
    {
        if (hash[i] == 0)
        {
            return i;
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
    cout << findMissingNum(arr) << endl;
    return 0;
}

// Time Complexity: O(n)
// Space Complexity: O(n)