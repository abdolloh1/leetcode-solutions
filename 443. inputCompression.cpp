// Algorithm
// Initialize an empty string
// Loop to go through array and find occurences
// Add character in string along with the count of it in array
// Update the character array with the string
// Return the length of compressed Array

// Time : O(n)
// Space : O(1)

#include <iostream>
#include <string>
using namespace std;

int compress(char array[], int size)
{
    string s = "";
    for (int i = 0; i < size;)
    {
        char currChar = array[i];
        int count = 0;
        
        while (i < size && array[i] == currChar)
        {
            count++;
            i++;
        }
        
        s += currChar;
        
        if (count > 1)
        {
            s += to_string(count);
        }
    }
    
    for (int i = 0; i < s.length(); i++)
    {
        array[i] = s[i];
    }
    
    return s.length();
}

int main()
{
    char array[] = {'a', 'a', 'b', 'b', 'c', 'c', 'c'};
    int size = sizeof(array) / sizeof(array[0]);
    
    int newLength = compress(array, size);
    
    cout << "Compressed array: ";
    for (int i = 0; i < newLength; i++)
    {
        cout << array[i];
    }
    cout << endl;
    cout << "New length: " << newLength << endl;
    
    return 0;
}
