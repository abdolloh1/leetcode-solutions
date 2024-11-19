#include <iostream>
using namespace std;

int countMaxORSubsets(int nums[], int size)
{
    int maxOR = 0;
    
    for (int i = 0; i < size; i++)
    {
        maxOR |= nums[i];
    }
    
    int count = 0;
    int totalSubsets = 1 << size;
    
    for (int subset = 1; subset < totalSubsets; subset++)
    {
        int currentOR = 0;
        for (int i = 0; i < size; i++)
        {
            if (subset & (1 << i))
            {
                currentOR |= nums[i];
            }
        }
        if (currentOR == maxOR)
        {
            count++;
        }
    }
    return count;
}

int main()
{
    int nums[] = {3, 1};
    int size = sizeof(nums) / sizeof(nums[0]);
    
    int result = countMaxORSubsets(nums, size);
    cout << "Number of subsets with maximum OR: " << result << endl;
    
    return 0;
}
