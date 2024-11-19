#include <iostream>
using namespace std;


void selectionSort(int times[][2], int size, int indecies[])
{
    for (int i = 0; i < size - 1; ++i)
    {
        int minIndex = i;
        for (int j = i + 1; j < size; ++j)
        {
            if (times[j][0] < times[minIndex][0]) {
                minIndex = j;
            }
        }
        swap(times[i][0], times[minIndex][0]);
        swap(times[i][1], times[minIndex][1]);
        swap(indecies[i], indecies[minIndex]);
    }
}

int smallestChair(int times[][2], int size, int targetFriend)
{
    int indecies[100];
    for(int i = 0; i<size; i++)
    {
        indecies[i] = i;
    }
    
    selectionSort(times, size, indecies);
    
    int occupied[1000] = {};
    int leaveTime[1000] = {};
    
    for (int i = 0; i < size; ++i)
    {
        for (int j = 0; j < 1000; ++j)
        {
            if (leaveTime[j] <= times[i][0])
            {
                occupied[j] = 0;
            }
        }
        
        int assignedChair = -1;
        for (int j = 0; j < 1000; ++j)
        {
            if (occupied[j] == 0)
            {
                assignedChair = j;
                occupied[j] = 1;
                leaveTime[j] = times[i][1];
                break;
            }
        }
        
        if (indecies[i] == targetFriend)
        {
            return assignedChair;
        }
    }
    
    return -1;
}

int main ()
{
    const int size = 3;
    int times[size][2] = {{1,4},{2,3},{4,6}};
    int targetFriend = 1;
    
    cout << smallestChair(times, size, targetFriend) << endl;
    
    return 0;
}
