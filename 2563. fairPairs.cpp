#include <iostream>
using namespace std;

int countFairPairs(int array[], int size, int lower, int upper)
{
    int pairCount = 0;
    
    for(int i = 0; i<size; i++)
    {
        for(int j = i+1; j<size; j++)
        {
            int sum = array[i] + array[j];
            
            if(sum>= lower && sum <= upper)
            {
                pairCount++;
            }
        }
    }
    return pairCount;
}

int main ()
{
    const int size = 6;
    int nums[size] = {0,1,7,4,4,5};
    int lower = 3;
    int upper = 6;
    
    cout << countFairPairs(nums, size, lower, upper) << endl;
    
    return 0;
}
