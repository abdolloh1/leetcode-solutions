// Algorithm
// The real trick is one if statement in the loop
// If element = 0 & (i = 0 or previous element = 0) & (i = size -1 or next element = 0)
// element = 1
// increase the count
// Return the count after looping through the array

#include <iostream>
using namespace std;

bool canPlaceFlowers(int flowerBed[], int size, int n)
{
    int count = 0;
    
    for(int i = 0; i<size; i++)
    {
        if (flowerBed[i] == 0 &&
        (i == 0 || flowerBed[i - 1] == 0) &&
        (i == size - 1 || flowerBed[i + 1] == 0))
        {
            flowerBed[i] = 1;
            count++;
        }
    }
    
    if(count >= n)
    {
        return true;
    }
    return false;
}

int main ()
{
    const int size = 5;
    int floweBed[size] = {1,0,0,0,1};
    int n = 2;
    
    cout << canPlaceFlowers(floweBed, size, n);
    cout << endl;
    
    return 0;
}
