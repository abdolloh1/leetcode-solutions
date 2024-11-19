// Algorithm
// Make a maxSum = first element
// Make a current sum = first element
// A loop from second index to end
// If an element is greater than that element + currSum, make it currSum
// Update maxSum = current sum if its greater than maxSum
// Return maxSum when loop ends

#include <iostream>
using namespace std;

int maxSubArray(int array[], int size) // Kadane’s Algorithm 
{
    int maxSum = array[0];
    int currSum = array[0];
    
    for (int i = 1; i < size; i++)
    {
        currSum = max(array[i], currSum + array[i]);
        maxSum = max(maxSum, currSum);
    }
    
    return maxSum;
}


int main ()
{
    const int size = 9;
    int array[size] = {-2,1,-3,4,-1,2,1,-5,4};
    
    cout << maxSubArray(array, size) << endl;
    
    return 0;
}
