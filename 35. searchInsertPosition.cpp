// Algorithm
// Initialize the left and right pointers to the start and end of the array
// Use a while loop to perform binary search
// Calculate the middle element using mid = left + (right - left) / 2
// Step 4: If the middle element matches the target, return mid
// Step 5: Adjust both pointers based on whether the middle element is less than or greater than the target
// Step 6: If the target is not found, return left, which is the insertion position

#include <iostream>
using namespace std;

int searchInsertPosition(int array[], int size, int target)
{
    int left = 0;
    int right = size-1;
    int mid = 0;
    
    while(left<=right)
    {
        mid = left + (right - left) / 2;
        
        if(mid == target)
        {
            return mid;
        }
        
        if(array[mid] < target)
        {
            left = mid+1;
        }
        else
        {
            right = mid-1;
        }
    }
    
    return left;
}

int main ()
{
    const int size = 4;
    int array[size] = {1,3,5,6};
    
    int target = 5;
    cout << "Target : " << target << " Index : " << searchInsertPosition(array, size, target) << endl;
    
    target = 2;
    cout << "Target : " << target << " Index : " << searchInsertPosition(array, size, target) << endl;
    
    target = 7;
    cout << "Target : " << target << " Index : " << searchInsertPosition(array, size, target) << endl;
    
    cout << endl;
    
    return 0;
}
