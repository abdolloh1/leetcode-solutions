#include <iostream>
using namespace std;

int trap (int height[], int size)
{
    if(size == 0)
    {
        return 0;
    }
    
    int left = 0;
    int right = size-1;
    int leftMax = 0;
    int rightMax = 0;
    
    int waterTrapped = 0;
    while(left<=right)
    {
        if(height[left] <= height[right])
        {
            if(height[left] >= leftMax)
            {
                leftMax = height[left];
            }
            else
            {
                waterTrapped += leftMax-height[left];
            }
            left++;
        }
        
        else
        {
            if (height[right] >= rightMax)
            {
                rightMax = height[right];
            }
            else
            {
                waterTrapped += rightMax - height[right];
            }
            right--;
        }
    }
    return waterTrapped;
}

int main ()
{
    const int size = 12;
    int height[] = {0,1,0,2,1,0,1,3,2,1,2,1};
    
    cout << trap(height, size);
    
    return 0;
}
