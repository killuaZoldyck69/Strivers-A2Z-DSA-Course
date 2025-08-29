#include <iostream>
#include <vector>
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
vector<vector<int>> rotateImage_brute(vector<vector<int>> &matrix, int n)
{
    vector<vector<int>> res(n, vector<int>(n));

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            res[j][n - 1 - i] = matrix[i][j];
        }
    }

    return res;
}

int main()
{
    int size;
    cout << "Enter your squre matrix size: ";
    cin >> size;
    vector<vector<int>> matrix(size, vector<int>(size));
    inputMatrix(matrix);
    vector<vector<int>> res = rotateImage_brute(matrix, size);
    cout << "Rotated new matrix: " << endl;
    printMatrix(res);
    return 0;
}

// Time Complexity: O(n^2)
// Space Complexity: O(n^2)