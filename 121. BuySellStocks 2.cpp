// You are given an integer array prices where prices[i] is the price of a given stock on the ith day.
// On each day, you may decide to buy and/or sell the stock.
// You can only hold at most one share of the stock at any time.
// However, you can buy it then immediately sell it on the same day.
// Find and return the maximum profit you can achieve.

// Algorithm
// Loop to compare
// If any price is greater than its previous day price
// Add (Price - Price of previous day) in Max Profit
// Return Max Profit

#include <iostream>
using namespace std;

int maxProfit(int prices[], int size) // Time complexity O(n)
{
    int mProfit = 0;

    for (int i = 1; i < size; i++)
    {
        if (prices[i] > prices[i - 1])
        {
            mProfit += prices[i] - prices[i - 1];
        }
    }

    return mProfit;
}

int main ()
{
    const int size = 5;
    int prices[size] = {1,2,3,4,5};
    
    cout << "Prices : ";
    for(int i = 0; i<size; i++)
    {
        cout << " " << prices[i];
    }
    cout << endl << endl;
    
    cout << "Max Profit : " << maxProfit(prices, size) << endl;
    
    return 0;
}

