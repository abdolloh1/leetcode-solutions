// Algorithm
// Find maximum in the candies array
// Make a bool array
// If the child's candies + extra candies is greater than maximum, store true in bool array
// Else, store false

// Algorithm 2
// Same like algorithm 1, just a dynamic allocated bool array
// At the end you return that array

#include <iostream>
using namespace std;

void kidsWithCandies(int array[], int size, int extraCandies, bool resultArray[])
{
    int maximumCandies = 0;
    for(int i = 0; i<size; i++)
    {
        if(array[i] > maximumCandies)
        {
            maximumCandies = array[i];
        }
    }
    
    for(int i = 0; i<size; i++)
    {
        if((array[i] + extraCandies) >= maximumCandies)
        {
            resultArray[i] = true;
        }
        else
        {
            resultArray[i] = false;
        }
    }
}

bool* kidsWithCandies2(int array[], int size, int extraCandies)
{
    bool* resultArray = new bool[size];
    
    int maximumCandies = 0;
    
    for(int i = 0; i < size; i++)
    {
        if(array[i] > maximumCandies)
        {
            maximumCandies = array[i];
        }
    }
    
    for(int i = 0; i < size; i++)
    {
        if((array[i] + extraCandies) >= maximumCandies)
        {
            resultArray[i] = true;
        }
        
        else
        {
            resultArray[i] = false;
        }
    }
    
    return resultArray;
}


int main ()
{
    const int size = 3;
    int array[size] = {12,1,12};
    int extraCandies = 1;
    bool resultArray[size];
    
    
    kidsWithCandies(array, size, extraCandies, resultArray);
    bool* result = kidsWithCandies2(array, size, extraCandies);
    
    for(int i = 0; i<size; i++) // For Algo1
    {
        cout << resultArray[i] << " ";
    }
    
    for (int i = 0; i < size; i++) // For Algo2
    {
        cout << result[i] << " ";
    }
    cout << endl;
    delete[] result;
    
    cout << endl << endl;
    
    return 0;
}
