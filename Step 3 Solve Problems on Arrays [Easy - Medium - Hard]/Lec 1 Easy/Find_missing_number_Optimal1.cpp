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
    int n = a.size();
    int expSum = n * (n + 1) / 2;
    int sum = 0;
    for (int ele : a)
    {
        sum += ele;
    }
    return expSum - sum;
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
// Space Complexity: O(1)