#include <iostream>
#include <vector>
#include <map>
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

bool sortArray(vector<int> &nums)
{
    int count0, count1, count2;
    count0 = count1 = count2 = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] == 0)
            count0++;
        else if (nums[i] == 1)
            count1++;
        else if (nums[i] == 2)
            count2++;
    }

    for (int i = 0; i < count0; i++)
    {
        nums[i] = 0;
    }
    for (int i = count0; i < count0 + count1; i++)
    {
        nums[i] = 1;
    }
    for (int i = count0 + count1; i < nums.size(); i++)
    {
        nums[i] = 2;
    }
}

int main()
{
    int size;
    cout << "Enter the array size: ";
    cin >> size;
    vector<int> arr(size);
    arrayInput(arr);
    sortArray(arr);
    arrayPrint(arr);
    return 0;
}

// Time Complexity:O(2n)
// Space Complexity: O(1)