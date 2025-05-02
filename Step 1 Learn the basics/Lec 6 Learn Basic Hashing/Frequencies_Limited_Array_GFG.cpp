#include <iostream>
#include <vector>
using namespace std;

// take vector element input from user
void vectorInput(vector<int> &vec, int n)
{
    for (int i = 0; i < n; i++)
    {
        int element;
        cin >> element;
        vec.push_back(element);
    }
}

vector<int> freqCount(vector<int> &vec)
{
    int size = vec.size();
    vector<int> freqVector(size, 0);
    for (int i = 0; i < size; i++)
    {
        freqVector[vec[i] - 1]++;
    }
    return freqVector;
}

int main()
{
    vector<int> vec;
    int size;
    cout << "Enter the size of vector: ";
    cin >> size;
    vectorInput(vec, size);

    // print frequency count vector
    for (auto ele : freqCount(vec))
    {
        cout << ele << endl;
    }

    return 0;
}