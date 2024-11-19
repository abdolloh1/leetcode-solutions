#include <iostream>
using namespace std;

bool increasingTriplets(int array[], int size)
{
    for(int i = 0; i<size-2; i++)
    {
        int j = i+1;
        int k = j+1;
        
        if(array[i] < array[j] && array[j] < array[k])
        {
            return true;
        }
    }
    return false;
}

int main ()
{
    const int size = 5;
    int array[size] = {5,4,3,2,1};
    
    cout << increasingTriplets(array, size);
    
    return 0;
}
