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
void setMatrixZero_optimal(vector<vector<int>> &matrix)
{
    int col0 = 1;
    for (int i = 0; i < matrix.size(); i++)
    {
        for (int j = 0; j < matrix[0].size(); j++)
        {
            if (matrix[i][j] == 0)
            {
                matrix[i][0] = 0; // for 0th col and all rows

                // for 0th row and all cols
                if (j != 0)
                {
                    matrix[0][j] = 0;
                }
                else
                {
                    col0 = 0;
                }
            }
        }
    }

    for (int i = 1; i < matrix.size(); i++)
    {
        for (int j = 1; j < matrix[0].size(); j++)
        {
            if (matrix[i][j] != 0)
            {
                if (matrix[i][0] == 0 || matrix[0][j] == 0)
                {
                    matrix[i][j] = 0;
                }
            }
        }
    }

    // Finally mark the 1st col & then 1st row:
    if (matrix[0][0] == 0)
    {
        for (int i = 0; i < matrix[0].size(); i++)
        {
            matrix[0][i] = 0;
        }
    }
    if (col0 == 0)
    {
        for (int i = 0; i < matrix.size(); i++)
        {
            matrix[i][0] = 0;
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
    setMatrixZero_optimal(matrix);
    cout << "The final matrix is: " << endl;
    matrixPrint(matrix);
    return 0;
}

// Time Complexity: O(m*n) --> m, n is row and col size
// Space Complexity: O(1)