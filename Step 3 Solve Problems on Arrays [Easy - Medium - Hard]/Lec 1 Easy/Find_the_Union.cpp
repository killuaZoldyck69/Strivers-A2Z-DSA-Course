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

vector<int> findUnion(vector<int> &arr1, vector<int> &arr2)
{
    set<int> st;
    vector<int> Union;
    for (int ele : arr1)
    {
        st.insert(ele);
    }
    for (int ele : arr2)
    {
        st.insert(ele);
    }
    for (int ele : st)
    {
        Union.push_back(ele);
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
    for (int ele : findUnion(arr1, arr2))
    {
        cout << ele << " ";
    }
    return 0;
}

// Time Compleixty : O((size1 + size2) log(size1 + size2))
// Space Complexity : O(size1 + size2) {If Space of Union ArrayList is considered}