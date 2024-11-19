// You are given an array prices where prices[i] is the price of a given stock on the ith day.
// You want to maximize your profit by choosing a single day to buy one stock and
// choosing a different day in the future to sell that stock.
// Return the maximum profit you can achieve from this transaction.
// If you cannot achieve any profit, return 0.

// Algorithm 1
// A loop to start from first index
// Another loop to compare with other elements
// If the element is greater than other element, Find difference to get profit
// If profit is higher than previous profit, replace it with previous one
// At the end, max profit will be remained
// If there's no profit, the profit would automatically remain 0

// Algorithm 2
// A minimum Price Variable, Initialize with a max number
// A loop to go through the array of prices
// Compare minimum price with every index
// If the element is smaller than minimum price, Store that element in minimum price
// if its not smaller than minimum price, compare the profit by substracting the element by minimum price
// If max profit is larger than the difference, make the difference max profit
// return max profit


#include <iostream>
using namespace std;

int maxProfit(int prices[], int size) // Time complexity : O(n^2)
{
    int mProfit = 0;
    for(int i = 0; i<size; i++)
    {
        for(int j = i+1; j<size; j++)
        {
            if (prices[i] < prices[j])
            {
                if(prices[j] - prices[i] > mProfit)
                {
                    mProfit = prices[j] - prices[i];
                }
            }
        }
    }
    
    return mProfit;
}

int maxProfit2(int prices[], int size) // Time Complexity : O(n)
{
    int minPrice = INT_MAX;
    int mProfit = 0;

    for (int i = 0; i < size; i++)
    {
        if (prices[i] < minPrice)
        {
            minPrice = prices[i];
        }
        else if (prices[i] - minPrice > mProfit)
        {
            mProfit = prices[i] - minPrice;
        }
    }

    return mProfit;
}

int main ()
{
    const int size = 5;
    int prices[size] = {7,6,4,3,1};
    
    cout << "Prices : ";
    for(int i = 0; i<size; i++)
    {
        cout << " " << prices[i];
    }
    cout << endl << endl;
    
    cout << "Max Profit : " << maxProfit2(prices, size) << endl;
    
    return 0;
}
