// Algorithnm
// If size is 0, return empty string
// Store first word (array[0] in prefix variable
// Start a loop and if prefix is not equal to zero in it, Substract the size of prefix
// If prefix is empty, return empty
// At the end, return the prefix

#include <iostream>
#include <string>
using namespace std;

string longestCommonPrefix(string array[], int size)
{
    if(size == 0)
    {
        return "";
    }
    
    string prefix = array[0];
    
    for (int i = 1; i < size; i++)
    {
        while (array[i].find(prefix) != 0)
        {
            prefix = prefix.substr(0, prefix.size() - 1);
            if (prefix.empty())
            {
                return "";
            }
        }
    }
    return prefix;
}

int main ()
{
    string words[] = {"flower", "flow", "flight"};
    int size = sizeof(words) / sizeof(words[0]);
    
    cout << longestCommonPrefix(words, size) << endl;
    // Time complexity : O(n*m)
    // Space complexity : O(m)
    
    return 0;
}
