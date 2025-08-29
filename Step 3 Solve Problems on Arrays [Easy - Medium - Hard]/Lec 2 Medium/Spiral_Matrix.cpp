#include <iostream>
#include <vector>
using namespace std;

// 2d vector input
void matrixInput(vector<vector<int>> &matrix)
{
    for (auto &row : matrix)
    {
        for (auto &val : row)
        {
            cin >> val;
        }
    }
}

// 2d vector print
void matrixPrint(vector<vector<int>> &matrix)
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

// print array
void arrayPrint(vector<int> &arr)
{
    for (int ele : arr)
    {
        cout << ele << " ";
    }
}

// traverse spiral order
vector<int> spiralMatrix(vector<vector<int>> &matrix)
{
    int m = matrix.size();
    int n = matrix[0].size();
    vector<int> ans;
    int top = 0, left = 0;
    int right = n - 1, bottom = m - 1;

    while (top <= bottom && left <= right)
    {
        // for moving left to right
        for (int i = left; i <= right; i++)
        {
            ans.push_back(matrix[top][i]);
        }
        top++;

        // for moving top to bottom
        for (int i = top; i <= bottom; i++)
        {
            ans.push_back(matrix[i][right]);
        }
        right--;

        // for moving right to left
        if (top <= bottom)
        {
            for (int i = right; i >= left; i--)
            {
                ans.push_back(matrix[bottom][i]);
            }
            bottom--;
        }

        // for moving bottom to top
        if (left <= right)
        {
            for (int i = bottom; i >= top; i--)
            {
                ans.push_back(matrix[i][left]);
            }
            left++;
        }
    }
    return ans;
}

int main()
{
    int rows, cols;
    cout << "Enter your matrix row and col size: ";
    cin >> rows >> cols;
    vector<vector<int>> matrix(rows, vector<int>(cols));
    matrixInput(matrix);
    vector<int> ans = spiralMatrix(matrix);
    arrayPrint(ans);
    return 0;
}

// Time Complexity : O(m *n) --> m and n is here row and col size
// Space Complexity : O(m *n)