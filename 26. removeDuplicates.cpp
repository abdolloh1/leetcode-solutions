// Algorithm
// Take a dynamic array with its size being passed by reference
// A loop starting from first element
// Another loop to check if it matches with other elements
// Compare first loop's index with second loop's index
// If they are equal, another loop to shift other elements to left
// Decrease the size and 2nd loop's index


#include <iostream>
using namespace std;

void removeDuplicates(int *array, int &size)
{
    for(int i = 0; i<size; i++)
    {
        for(int j = i+1; j<size; j++)
        {
            if (array[i] == array[j])
            {
                for(int k = j; k<size; k++)
                {
                    array[k] = array[k+1];
                }
                size--;
                j--;
            }
        }
    }
}

void displayArray(int *array, int size)
{
    for(int i = 0; i<size; i++)
    {
        cout << " " << array[i];
    }
    
    cout << endl << endl;
}

int main ()
{
    int size = 3;
    int *array = new int[size];
    
    array[0] = 1;
    array[1] = 1;
    array[2] = 2;
    cout << "Array :";
    displayArray(array, size);
    
    removeDuplicates(array, size);
    cout << "Array after removing duplicates: ";
    displayArray(array, size);
    
    return 0;
}
