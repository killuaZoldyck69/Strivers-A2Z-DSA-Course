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
    cout << endl;
}

vector<int> findIntersection(vector<int> &a, vector<int> &b)
{
    int n = a.size();
    int m = b.size();
    vector<int> Intersection;
    int i = 0;
    int j = 0;
    while (i < n && j < m)
    {
        if (a[i] < b[j])
        {
            i++;
        }
        else if (a[i] > b[j])
        {
            j++;
        }
        else
        {
            if (Intersection.empty() || Intersection.back() != a[i])
            {
                Intersection.push_back(a[i]);
            }
            i++;
            j++;
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
    vector<int> Intersection = findIntersection(a, b);
    arrayPrint(Intersection);
    return 0;
}

// Time Complexity: O(n+m)
// Space Complexity: O(1) auxiliary (excluding output)
// Space Complexity: O(k) for the result, where k is the number of common elements