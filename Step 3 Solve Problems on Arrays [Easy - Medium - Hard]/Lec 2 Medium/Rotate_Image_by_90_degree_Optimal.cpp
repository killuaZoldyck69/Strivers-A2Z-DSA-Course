#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// 2d vector input
void inputMatrix(vector<vector<int>> &matrix)
{
    for (auto &row : matrix)
    {
        for (auto &value : row)
        {
            cin >> value;
        }
    }
}

// 2d vector print
void printMatrix(vector<vector<int>> &matrix)
{
    for (auto row : matrix)
    {
        for (auto val : row)
        {
            cout << val << " ";
        }
        cout << endl;
    }
}

// rotate image by 90 degree
void rotateImage_optimal(vector<vector<int>> &matrix, int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (i != j)
            {
                swap(matrix[i][j], matrix[j][i]);
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        reverse(matrix[i].begin(), matrix[i].end());
    }
}

int main()
{
    int size;
    cout << "Enter your squre matrix size: ";
    cin >> size;
    vector<vector<int>> matrix(size, vector<int>(size));
    inputMatrix(matrix);
    rotateImage_optimal(matrix, size);
    cout << "Rotated new matrix: " << endl;
    printMatrix(matrix);
    return 0;
}

// Time Complexity: O(n^2) + O(n^2)
// Space Complexity: O(1)