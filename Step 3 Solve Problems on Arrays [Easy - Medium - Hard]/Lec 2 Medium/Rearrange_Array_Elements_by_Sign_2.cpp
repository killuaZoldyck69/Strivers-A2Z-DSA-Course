#include <iostream>
#include <vector>
#include <map>
using namespace std;

// array input
void arrayInput(vector<int> &arr)
{
    for (int &ele : arr)
    {
        cin >> ele;
    }
}

// array print
void arrayPrint(vector<int> &arr)
{
    for (int ele : arr)
    {
        cout << ele << " ";
    }
}

// Rearrange Array Elements by Sign variety-2
void rearrangeArray(vector<int> &arr)
{
    vector<int> pos;
    vector<int> neg;

    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] > 0)
        {
            pos.push_back(arr[i]);
        }
        else
        {
            neg.push_back(arr[i]);
        }
    }

    if (pos.size() > neg.size())
    {
        for (int i = 0; i < neg.size(); i++)
        {
            arr[i * 2] = pos[i];
            arr[i * 2 + 1] = neg[i];
        }

        int index = neg.size();
        for (int j = 2 * neg.size(); j < arr.size(); j++)
        {
            arr[j] = pos[index];
            index++;
        }
    }
    else
    {
        for (int i = 0; i < pos.size(); i++)
        {
            arr[i * 2] = pos[i];
            arr[i * 2 + 1] = neg[i];
        }

        int index = pos.size();
        for (int j = 2 * pos.size(); j < arr.size(); j++)
        {
            arr[j] = neg[index];
            index++;
        }
    }
}

int main()
{
    int size;
    cout << "Enter the array size: ";
    cin >> size;
    vector<int> nums(size);
    arrayInput(nums);
    rearrangeArray(nums);
    arrayPrint(nums);
    return 0;
}

// Time Complexity: O(n) + O(n)
// Space Complexity: O(1)