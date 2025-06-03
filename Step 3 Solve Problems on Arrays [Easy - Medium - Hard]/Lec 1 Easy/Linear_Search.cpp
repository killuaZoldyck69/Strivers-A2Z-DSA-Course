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

int linearSearch(vector<int> &arr, int num)
{
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] == num)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    int size, k;
    cout << "Enter the array size and k: ";
    cin >> size >> k;
    vector<int> arr(size);
    arrayInput(arr);
    cout << linearSearch(arr, k);
    return 0;
}