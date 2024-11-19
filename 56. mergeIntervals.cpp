#include <iostream>
using namespace std;

void mergeIntervals(int intervals[][2], int size, int result[][2], int &mergedSize)
{
    for(int i = 0; i<size -1 ; i++)
    {
        for(int j = i+1; j<size; j++)
        {
            if(intervals[i][0] > intervals[j][0])
            {
                swap(intervals[i][0], intervals[j][0]);
            }
        }
    }
    
    result[0][0] = intervals[0][0];
    result[0][1] = intervals[0][1];
    mergedSize = 1;
    
    for(int i = 1; i<size; i++)
    {
        if (intervals[i][0] <= result[mergedSize-1][1])
        {
            result[mergedSize-1][1] = max(result[mergedSize-1][1], intervals[i][1]);
        }
        else
        {
            result[mergedSize][0] = intervals[i][0];
            result[mergedSize][1] = intervals[i][1];
            mergedSize++;
        }
    }
}

int main ()
{
    int intervals[4][2] = {{1,3}, {2,6}, {8,10}, {15,18}};
    int size = 4;
    int result[4][2];
    int mergedSize = 0;
    
    mergeIntervals(intervals, size, result, mergedSize);
    
    for (int i = 0; i < mergedSize; i++)
    {
        cout << "[" << result[i][0] << "," << result[i][1] << "] ";
    }
    
    return 0;
}
