#include <iostream>
using namespace std;

int minSubArrayLen(int array[], int size, int target)
{
    int start = 0;
    int end = 0;
    int sum = 0;
    int minLength = size+1;
    
    for(end = 0; end<size; end++)
    {
        sum = sum + array[end];
        
        while(sum>=target)
        {
            minLength = min(minLength, end-start+1);
            
            sum = sum - array[start];
            start++;
        }
    }
    
    if (minLength == size+1)
    {
        return 0;
    }
    
    return minLength;
}

int main ()
{
    const int size = 6;
    int array [size] = {2,3,1,2,4,3};
    int target = 7;
    cout << minSubArrayLen(array, size, target) << endl;
    
    const int size2 = 3;
    int array2[size2] = {1,4,4};
    target = 4;
    cout << minSubArrayLen(array2, size2, target) << endl;
    
    const int size3 = 8;
    int array3[size3] = {1,1,1,1,1,1,1,1};
    target = 11;
    cout << minSubArrayLen(array2, size2, target) << endl;
    
    return 0;
}
