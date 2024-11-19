// Algorithm

// Insert function
// If value already exists, Return False
// If size is equal to capacity, regrow
// Insert value at end position
// Increase size and index by 1 and return true

// Remove function
// If value exists, Shift the array to left
// Decrease the size and return true
// Return false if value isnt found

// GetRandom
// If there isnt any element, return -1
// Use rand builtin function to return the random number

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

class RandomizedSet
{
private:
    int size = 0;
    int *array;
    int capacity;
public:
    RandomizedSet(int initialCapacity)
    {
        capacity = initialCapacity;
        array = new int[capacity];
    }
    
    bool insert(int val, int &index)
    {
        for(int i = 0; i<size; i++)
        {
            if(array[i] == val)
            {
                return false;
            }
        }
        
        if (size == capacity)
        {
            int *newArray = new int[capacity * 2];
            for (int i = 0; i < size; i++)
            {
                newArray[i] = array[i];
            }
            delete[] array;
            array = newArray;
            capacity *= 2;
        }

        array[size] = val;
        size++;
        index++;
        return true;
    }
    
    bool remove(int val)
    {
        for(int i = 0; i<size; i++)
        {
            if(array[i] == val)
            {
                for(int j = i; j<size; j++)
                {
                    array[j] = array[j+1];
                }
                size--;
                return true;
            }
        }
        return false;
    }
    
    int getRandom()
    {
        if(size == 0)
        {
            return -1;
        }
        
        srand(time(0));
        int randomIndex = rand() % size;
        return array[randomIndex];
    }
};

int main()
{
    int initialCapacity = 5;
    int index = 0;
    RandomizedSet set(initialCapacity);
    
    set.insert(10, index);
    set.insert(20, index);
    set.insert(30, index);
    set.insert(40, index);
    cout << "Random element: " << set.getRandom() << endl;
    
    set.remove(20);
    
    cout << "Random element after removing 20: " << set.getRandom() << endl;
    set.insert(50, index);

    cout << "Random element after inserting 50: " << set.getRandom() << endl;
    return 0;
}


