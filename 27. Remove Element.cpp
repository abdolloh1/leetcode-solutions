// Algorithm
// Take a dynamic array (the size of static array might make a problem)
// Search the value using a loop
// If value is found, shift all the next elements
// Decrease the size of array (Pass size by reference)
// If value is not found, increment the loop

#include <iostream>
using namespace std;

int decreaseSize(int &size) // decreases size of array
{
    size--;
    return size;
}

int &removeNumber(int *array, int &size, int value)
{
    int i = 0;
    while (i<size)
    {
        if(array[i] == value) // search
        {
            for (int j = i; j<size-1; j++) // shift
            {
                array[j] = array[j+1];
            }
            
            decreaseSize(size);
        }
        else
        {
            i++;
        }
    }
    
    return size;
}

void displayArray(int array[], int size) // print array
{
    for(int i = 0; i<size; i++)
    {
        cout << " " << array[i];
    }
    cout << endl << endl;
}

int main ()
{
    int size = 5;
    int *array =  new int[size];
    
    array[0] = 3;
    array[1] = 2;
    array[2] = 2;
    array[3] = 3;
    array[4] = 4;
    
    
    int value = 0;
    cout << "Enter value to remove from array: ";
    cin >> value;
    
    cout << "Array : ";
    displayArray(array, size);
    
    removeNumber(array, size, value);
    
    cout << "Fixed Array : ";
    displayArray(array, size);
    
    delete[] array;
    return 0;
}
