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

void markCol(vector<vector<int>> &matrix, int m, int n)
{
    for (int i = 0; i < matrix.size(); i++)
    {
        if (matrix[i][n] != 0)
        {
            matrix[i][n] = -1;
        }
    }
}

void markRow(vector<vector<int>> &matrix, int m, int n)
{
    for (int i = 0; i < matrix[m].size(); i++)
    {
        if (matrix[m][i] != 0)
        {
            matrix[m][i] = -1;
        }
    }
}

// find longest consecutive squence brute force
void setMatrixZero_brute(vector<vector<int>> &matrix)
{
    // step-1: search the matrix where is zero and replace the full row and col with -1
    for (int i = 0; i < matrix.size(); i++)
    {
        for (int j = 0; j < matrix[i].size(); j++)
        {
            if (matrix[i][j] == 0)
            {
                markCol(matrix, i, j);
                markRow(matrix, i, j);
            }
        }
    }

    // step-2: Finally, mark all -1 as 0:
    for (int i = 0; i < matrix.size(); i++)
    {
        for (int j = 0; j < matrix[i].size(); j++)
        {
            if (matrix[i][j] == -1)
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
    setMatrixZero_brute(matrix);
    cout << "The final matrix is: " << endl;
    matrixPrint(matrix);
    return 0;
}

// Time Complexity: O(m * n * (m+n))
// Space Complexity: O(1)