// Algorithm
// Take two pointers, one at start and other at end
// A loop with a condition that first pointer should be lesser than the second
// Formula for Area = min(height[i], height[j]) * (j - i)
// Check if its greater than previous area, if it is replace it
// If first height is smaller than the second one, incremenet first pointer
// Do the same with second pointer (Else, incremenet second pointer)
// Return the maximum area

#include <iostream>
using namespace std;



int maxArea(int height[],int size)
{
    int maxArea = 0;
    int i = 0;
    int j = size-1;
    
    while(i<j)
    {
        maxArea = max(maxArea, (min(height[i],height[j])*(j-i)));
        
        if(height[i] < height[j])
        {
            i++;
        }
        else
        {
            j--;
        }
    }
    return maxArea;
}

int main ()
{
    const int size = 9;
    int array[size] = {1,8,6,2,5,4,8,3,7};
    
    cout << "Max Area : " << maxArea(array, size) << endl;
    
    return 0;
}
