#include <iostream>
#include <vector>
using namespace std;

// array input
void arrayInput(vector<int> &nums)
{
    for (int &ele : nums)
    {
        cin >> ele;
    }
}

int stockBuySell(vector<int> prices)
{
    int mini = prices[0];
    int maxProfit = 0;
    ;
    for (int i = 1; i < prices.size(); i++)
    {
        int profit = prices[i] - mini;
        maxProfit = max(maxProfit, profit);
        mini = min(mini, prices[i]);
    }
    return maxProfit;
}

int main()
{
    int size;
    cout << "Enter the array size: ";
    cin >> size;
    vector<int> nums(size);
    arrayInput(nums);
    cout << stockBuySell(nums) << endl;
    return 0;
}

// Time Complexity: O(n)
// Space Complexity: O(1)