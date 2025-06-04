#include <iostream>
#include <vector>
#include <unordered_set>
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
    cout << endl;
}

vector<int> findIntersection_unsortedArray_Optimal(vector<int> &a, vector<int> &b)
{
    unordered_set<int> as(a.begin(), a.end());
    vector<int> Intersection;

    for (int ele : b)
    {
        if (as.find(ele) != as.end())
        {
            Intersection.push_back(ele);
            as.erase(ele);
        }
    }

    return Intersection;
}

int main()
{
    int n, m;
    cout << "Enter the size of Array_1 and Array_2: ";
    cin >> n >> m;
    vector<int> a(n);
    vector<int> b(m);
    arrayInput(a);
    arrayInput(b);
    vector<int> Intersection = findIntersection_unsortedArray_Optimal(a, b);
    arrayPrint(Intersection);
    return 0;
}

// Time Complexity: O(n+m)
// Time Complexity: O(n + min(n, m))