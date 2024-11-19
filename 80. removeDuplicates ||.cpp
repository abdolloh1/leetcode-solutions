// Algorithm
// Take a dynamic array and pass its size by reference
// First loop with a count
// 2nd loop to compare with other elements
// If the elements match, increase the count by one
// If count is greater than 2, third loop to shift
// Decrease the size after shifting

#include <iostream>
using namespace std;

void removeDuplicates(int *array, int &size)
{
    for(int i = 0; i<size; i++)
    {
        int count = 1;
        for(int j = i+1; j<size; j++)
        {
            if (array[i] == array[j])
            {
                count++;
                if(count > 2)
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
    int size = 9;
    int *array = new int[size];
    
    array[0] = 2;
    array[1] = 2;
    array[2] = 2;
    array[3] = 1;
    array[4] = 1;
    array[5] = 1;
    array[6] = 3;
    array[7] = 3;
    array[8] = 3;
    
    cout << "Array :";
    displayArray(array, size);
    
    removeDuplicates(array, size);
    cout << "Array after removing duplicates: ";
    displayArray(array, size);
    
    return 0;
}
