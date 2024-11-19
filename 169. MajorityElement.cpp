// Given an array nums of size n, return the majority element.
// The majority element is the element that appears more than ⌊n / 2⌋ times.
// You may assume that the majority element always exists in the array.

// Algorithm
// A loop to go through all elements
// Another loop to compare
// If its matched, increment the count
// If count is greater than size/2, store the element in a variable
// return that variable 

#include <iostream>
using namespace std;

int majorityElement(int array[], int size)
{
    int mElement = 0;
    int count = 1;
    for (int i = 0; i<size; i++)
    {
        for(int j = i+1; j<size; j++)
        {
            if (array[i] == array[j])
            {
                count++;
            }
        }
        
        if (count > size/2)
        {
            mElement = array[i];
            return mElement;
        }
    }
    return mElement;
}

int main ()
{
    const int size = 12;
    int array[size] = {1,1,2,2,2,3,3,4,4,4,4,4};
    
    cout << "The majority element in this array is: ";
    cout << majorityElement(array, size);
    cout << endl;
    
    return 0;
}
