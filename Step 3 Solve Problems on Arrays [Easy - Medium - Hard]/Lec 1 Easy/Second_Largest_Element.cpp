#include <iostream>
#include <vector>
using namespace std;

void arrayInput(vector<int> &arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        int ele;
        cin >> ele;
        arr.push_back(ele);
    }
}

void arrayPrint(vector<int> &arr)
{
    for (int ele : arr)
    {
        cout << ele << " ";
    }
}

// find second largest element
int secondLargest(int n, vector<int> &a)
{
    int largest = a[0];
    int sLargest = -1;
    for (int i = 0; i < n; i++)
    {
        if (a[i] > largest)
        {
            sLargest = largest;
            largest = a[i];
        }
        else if (a[i] < largest && a[i] > sLargest)
        {
            sLargest = a[i];
        }
    }
    return sLargest;
}

// find second smallest element
int secondSmallest(int n, vector<int> &a)
{
    int smallest = a[0];
    int sSmallest = INT32_MAX;
    for (int i = 0; i < n; i++)
    {
        if (a[i] < smallest)
        {
            sSmallest = smallest;
            smallest = a[i];
        }
        else if (a[i] > smallest && a[i] < sSmallest)
        {
            sSmallest = a[i];
        }
    }
    return sSmallest;
}

// get second order elements
vector<int> getSecondOrderElements(int n, vector<int> &a)
{
    int sLargest = secondLargest(n, a);
    int sSmallest = secondSmallest(n, a);
    return {sLargest, sSmallest};
}

int main()
{
    int size;
    cout << "Enter the array size: ";
    cin >> size;
    vector<int> arr;
    arrayInput(arr, size);
    vector<int> secondOrder = getSecondOrderElements(size, arr);
    arrayPrint(secondOrder);
    return 0;
}

// Time Complexity: O(n)+O(n)+O(n)+O(1)= O(n)
// Space Complexity: O(n)+O(1)= O(n)