// You are given a 0-indexed array of integers nums of length n.
// You are initially positioned at nums[0].
// Each element nums[i] represents the maximum length of a forward jump from index i.
// In other words, if you are at nums[i], you can jump to any nums[i + j] where:
// 0 <= j <= nums[i] and
// i + j < n
// Return the minimum number of jumps to reach nums[n - 1].

// Algorithm
// Greedy Approach
// Start a loop and find the farthest by comparing it with index+element
// If the index is equal to the current end, Make the farthest the current end
// It keeps doing until it reaches size-1 i.e. destination
// Increase jumps count by 1, everytime the index is equal to current end
// return jumps counts

#include <iostream>
using namespace std;

int jump(int array[], int size)
{
    int jumpsCount = 0;
    int currentEnd = 0;
    int farthest = 0;
    
    for(int i = 0; i<size-1; i++)
    {
        if((i+array[i]) > farthest)
        {
            farthest = i+array[i];
        }
        
        if(i == currentEnd)
        {
            jumpsCount++;
            currentEnd = farthest;
        }
        
        if(currentEnd >= size-1)
        {
            break;
        }
    }
    
    return jumpsCount;
}

int main ()
{
    const int size = 5;
    int array[size] = {2,3,1,1,4};
    
    cout << endl << jump(array, size) << endl;
    
    return 0;
}
