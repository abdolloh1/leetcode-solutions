// Algorithm
// First find total gas and total cost
// If total gas is lessar than total cost, cycle is not possible and return -1
// Add gas of station in the tank, Substract cost from the tank in every loop
// If tank is less than 0, it means we cant go further
// Add next station at the startpoint and empty the tank
// Return the startpoint

#include <iostream>
using namespace std;

int canCompleteCircuit(int gas[], int cost[], int size)
{
    int totalGas = 0;
    int totalCost = 0;
    
    int startPoint = 0;
    int tank = 0;
    
    for(int i = 0; i<size; i++) // We can reduce runtime if we remove this
    {
        totalCost = totalCost + cost[i];
        totalGas = totalGas + gas[i];
    }
    
    if(totalGas > totalCost)
    {
        return -1;
    }
    
    for(int i = 0; i<size; i++)
    {
        tank = tank+gas[i];
        tank = tank-cost[i];
        
        if(tank < 0)
        {
            startPoint = i + 1;
            tank = 0;
        }
    }
    
    return startPoint;
}

int main ()
{
    const int size = 5;
    int gas[size] = {1,2,3,4,5};
    int cost[size] = {3,4,5,1,2};
    
    cout << endl;
    cout << canCompleteCircuit(gas, cost, size); // Time complexity : O(n)
    cout << endl;
    
}
