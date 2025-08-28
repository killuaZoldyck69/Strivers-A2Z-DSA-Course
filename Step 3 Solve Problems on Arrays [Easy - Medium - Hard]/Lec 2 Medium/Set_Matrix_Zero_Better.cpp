#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// 2d matrix input
void matrixInput(vector<vector<int>> &matrix, int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cin >> matrix[i][j];
        }
    }
}

// 2d matrix print
void matrixPrint(vector<vector<int>> &matrix)
{
    for (int i = 0; i < matrix.size(); i++)
    {
        for (int j = 0; j < matrix[i].size(); j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

// find longest consecutive squence better solution
void setMatrixZero_better(vector<vector<int>> &matrix)
{
    int row[matrix.size()];
    int col[matrix[0].size()];
    // step-1: marked row and column which contain zero
    for (int i = 0; i < matrix.size(); i++)
    {
        for (int j = 0; j < matrix[0].size(); j++)
        {
            if (matrix[i][j] == 0)
            {
                row[i] = 1;
                col[j] = 1;
            }
        }
    }

    // step-2: replaced marked row and column with zero
    for (int i = 0; i < matrix.size(); i++)
    {
        for (int j = 0; j < matrix[0].size(); j++)
        {
            if (row[i] == 1 || col[j] == 1)
            {
                matrix[i][j] = 0;
            }
        }
    }
}

int main()
{
    int rows, cols;
    cout << "Enter the matrix rows and cols size:  ";
    cin >> rows >> cols;
    vector<vector<int>> matrix(rows, vector<int>(cols));
    matrixInput(matrix, rows, cols);
    setMatrixZero_better(matrix);
    cout << "The final matrix is: " << endl;
    matrixPrint(matrix);
    return 0;
}

// Time Complexity:  O(2*(n*m)) --> m, n is row and col size
// Space Complexity: O(m) + O(n) --> m, n is row and col size