#include <iostream>
using namespace std;

// Brute Force Approach
bool containsDuplicate(int array[], int size)
{
    for(int i = 0; i<size; i++)
    {
        for(int j = i+1; j<size; j++)
        {
            if(array[i]==array[j])
            {
                return true;
            }
        }
    }
    
    return false;
}

// Hashtable
bool containsDuplicate2(int array[], int size)
{
    const int maxValue = 100000;
    bool hashTable[maxValue] = {false};
    
    for(int i = 0; i<size; i++)
    {
        if(hashTable[array[i]])
        {
            return true;
        }
        hashTable[array[i]] = true;
    }
    
    return false;
}

// Sorting
void bubbleSort(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap arr[j] and arr[j+1]
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

bool containsDuplicate3(int array[], int size)
{
    bubbleSort(array, size);

    for (int i = 1; i < size; i++)
    {
        if (array[i] == array[i - 1])
        {
            return true;
        }
    }
    return false;
}

int main ()
{
    const int size = 4;
    int array[size] = {1,2,3,4};
    cout << containsDuplicate(array, size);
    cout << containsDuplicate2(array, size);
    cout << containsDuplicate(array, size);
    
    return 0;
}
