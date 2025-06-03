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

vector<int> findUnion_Optimal(vector<int> &arr1, vector<int> &arr2)
{
    int i = 0;
    int j = 0;
    vector<int> Union;
    while (i < arr1.size() && j < arr2.size())
    {
        if (arr1[i] <= arr2[j])
        {
            if (Union.empty() || Union.back() != arr1[i])
            {
                Union.push_back(arr1[i]);
            }
            i++;
        }
        else
        {
            if (Union.empty() || Union.back() != arr2[j])
            {
                Union.push_back(arr2[j]);
            }
            j++;
        }
    }
    while (i < arr1.size())
    {
        if (Union.back() != arr1[i])
        {
            Union.push_back(arr1[i]);
        }
        i++;
    }
    while (j < arr2.size())
    {
        if (Union.back() != arr2[j])
        {
            Union.push_back(arr2[j]);
        }
        j++;
    }
    return Union;
}
int main()
{
    int size1, size2;
    cout << "Enter the size of Array_1 and Array_2: ";
    cin >> size1 >> size2;
    vector<int> arr1(size1);
    vector<int> arr2(size2);
    arrayInput(arr1);
    arrayInput(arr2);
    vector<int> u = findUnion_Optimal(arr1, arr2);
    for (int ele : u)
    {
        cout << ele << " ";
    }
    return 0;
}

// Time Compleixty : O(size1 + size2)
// Space Complexity : O(size1 + size2) {If Space of Union ArrayList is considered}