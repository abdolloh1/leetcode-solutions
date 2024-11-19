// Algorithm
// First Sort the array
// Size - index should be lesser than the element
// Return if its less

#include <iostream>
using namespace std;

void sortArray(int array[], int size)
{
    int temp;
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (array[i] > array[j])
            {
                temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }
}

int hIndex (int citations[], int size)
{
    sortArray(citations, size);
    
    for(int i = 0; i<size; i++)
    {
        if(citations[i] >= size-i)
        {
            return size-i;
        }
    }
    return 0;
}

void display(int array[], int size)
{
    for(int i = 0; i<size; i++)
    {
        cout << " " << array[i];
    }
    cout << endl << endl;
}

int main ()
{
    const int size = 5;
    int array[size] = {3,0,6,1,5};
    
    cout << "Original Array: " << endl;
    display(array, size);
    
    cout << "Sorted Array: " << endl;
    display(array, size);
    
    cout << "H-Index : " << hIndex(array, size) << endl << endl;
    
    return 0;
}
