// Algorithm
// Start from first index
// Check for AB and CD in the string
// Remove the pair (Used erase)
// Decrease the index by 1 to check for new pairs after erasing
// Move to next index if no pair is found
// Return the new length of the string

#include <iostream>
#include <string>
using namespace std;

int minLength(string s)
{
    int i = 0;
    while (i < s.length())
    {
        if ((s[i] == 'A' && i + 1 < s.length() && s[i+1] == 'B') ||
            (s[i] == 'C' && i + 1 < s.length() && s[i+1] == 'D'))
        {
            s.erase(i, 2);
            if (i > 0)
            {
                i--;
            }
        }
        
        else
        {
            i++;
        }
    }
    
    // Return the final length of the modified string
    return s.length();
}

int main ()
{
    string s = "ABFCACDB";
    
    cout << minLength(s) << endl << endl;
    
    return 0;
}
