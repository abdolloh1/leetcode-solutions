// Given an integer array nums, rotate the array to the right by k steps, where k is non-negative.

// Algorithm
// Create a loop that runs for k times
// Make a count to rotate it for k times
// Create a temp variable to store last element
// Shift all elements to the right
// Put temp variable at first index

#include <iostream>
using namespace std;

void rotateArray(int*array, int size, int k)
{
   
    int countK = 0;
    while (countK < k)
    {
        int temp = array[size-1];
        for(int i = size-1; i>0; i--)
        {
            array[i] = array[i-1];
        }
        array[0] = temp;
        
        countK++;
    }
}

void displayArray(int *array, int size)
{
    for (int i = 0; i<size; i++)
    {
        cout << " " << array[i];
    }
    cout << endl << endl;
}

int main ()
{
    int size = 7;
    int *array = new int [size];
    int k = 0;
    
    array[0] = 1;
    array[1] = 2;
    array[2] = 3;
    array[3] = 4;
    array[4] = 5;
    array[5] = 6;
    array[6] = 7;
    
    cout << "Enter number of times you want to rotate the array: ";
    cin >> k;
    
    
    cout << "Array : ";
    displayArray(array, size);
    
    rotateArray(array, size, k);
    
    cout << "Array after rotation by " << k << " times :- " << endl;
    displayArray(array, size);
    
    return 0;
}
