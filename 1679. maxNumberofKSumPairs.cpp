// Algorithm
// Sort the array
// Initialize to pointers, start and end
// Initialize a variable i.e. operations
// Loop breaks when start is lesser than the end
// If element at start + element at end is equal to k, inc. start and operations and dec. end
// Else if the sum is lesser than k, just move start to right
// Else if the sum is greater than k, just move end to left
// return operations when loop breaks

#include <iostream>
using namespace std;

int maxOperations(int* array, int size, int k)
{
    sort(array, array + size);
    int operations = 0;
    int start = 0;
    int end = size - 1;
    
    while (start < end)
    {
        if (array[start] + array[end] == k)
        {
            operations++;
            start++;
            end--;
        }
        else if (array[start] + array[end] < k)
        {
            start++;
        }
        else
        {
            end--;
        }
    }
    return operations;
}

void display(int*array, int size)
{
    for(int i = 0; i<size; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
}

int main ()
{
    int size = 4;
    int*array = new int[size];
    
    int k = 5;
    
    array[0] = 1;
    array[1] = 2;
    array[2] = 3;
    array[3] = 4;
    
    display(array, size);
    
    cout << " Max Operations = " << maxOperations(array, size, k) << endl;
    
    delete[] array;
    return 0;
    
}
