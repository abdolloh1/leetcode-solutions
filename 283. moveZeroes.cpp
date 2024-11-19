// Algorithm
// First declare a variable nonZero = 0 to stay at index thats nonZero
// Start a loop
// If element is not equal to zero, put that element on nonZero index
// Increment non Zero
// All zeroes will be removed
// Another loop to put zeroes till the end(size-1)

#include <iostream>
using namespace std;

void moveZeroes(int *array, int size)
{
    int nonZero = 0;
    for(int i = 0; i<size; i++)
    {
        if(array[i] != 0)
        {
            array[nonZero] = array[i];
            nonZero++;
        }
    }
    
    for(int i = nonZero; i<size; i++)
    {
        array[i] = 0;
    }
}

void display(int*array, int size)
{
    for(int i = 0; i<size; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl << endl;
}

int main ()
{
    int size = 5;
    int *array = new int[size];
    
    array[0] = 0;
    array[1] = 1;
    array[2] = 0;
    array[3] = 3;
    array[4] = 12;
    
    cout << "Original Array : " << endl;
    display(array, size);
    
    moveZeroes(array, size);
    
    cout << "Moved 0s to end : " << endl;
    display(array, size);
    
    return 0;
}
