#include <iostream>
using namespace std;

int makePositive(int num)
{
    num = -(num);
    return num;
}

bool containsNearbyDuplicate(int array[], int size, int k)
{
    for(int i = 0; i<size; i++)
    {
        for(int j = i+1; j<size; j++)
        {
            if(array[i] == array[j])
            {
                if(makePositive(i-j)<=k)
                {
                    return true;
                }
            }
        }
    }
    return false;
}

bool containsNearbyDuplicate2(int array[], int size, int k)
{
    unordered_map<int, int> num;
    
    for (int i = 0; i < size; i++)
    {
        if (num.find(array[i]) != num.end())
        {
            if (i - num[array[i]] <= k)
            {
                return true;
            }
        }
        num[array[i]] = i;
    }
    return false;
}


bool containsNearbyDuplicate3(int array[], int size, int k)
{
    int window[k + 1];
    int windowSize = 0;
    
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < windowSize; j++)
        {
            if (window[j] == array[i])
            {
                return true;
            }
        }
        
        if (windowSize < k + 1)
        {
            window[windowSize++] = array[i];
        }
        
        if (windowSize == k + 1)
        {
            for (int j = 0; j < windowSize - 1; j++)
            {
                window[j] = window[j + 1];
            }
            windowSize--;
        }
    }
    return false;
}


int main ()
{
    const int size = 6;
    int array[size] = {1,2,3,1,2,3};
    int k = 2;
    
    cout << containsNearbyDuplicate(array, size, k) << endl; // BruteForce
    cout << containsNearbyDuplicate2(array, size, k) << endl; // Hashmaps
    cout << containsNearbyDuplicate3(array, size, k) << endl; // SlidingWindow
    
    
    return 0;
}
