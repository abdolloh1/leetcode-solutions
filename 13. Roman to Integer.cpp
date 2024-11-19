// Algorithm
// Take roman as input
// Find its length
// Start loop from the last character
// Use ifs to put values of each character
// Add all those values in a variable
// Return the sum of values


#include <iostream>
#include <string>

using namespace std;

int romanToInt(string roman) // Time complexity : O(n) - n = size of string
{
    int integer = 0;
    int n = roman.length();
    
    for (int i = n - 1; i >= 0; i--)
    {
        if (roman[i] == 'M')
        {
            integer += 1000;
        }
        else if (roman[i] == 'D')
        {
            integer += 500;
        }
        else if (roman[i] == 'C')
        {
            if (i < n - 1 && (roman[i+1] == 'D' || roman[i+1] == 'M'))
            {
                integer -= 100;
            }
            else {
                integer += 100;
            }
        }
        else if (roman[i] == 'L')
        {
            integer += 50;
        }
        else if (roman[i] == 'X')
        {
            if (i < n - 1 && (roman[i+1] == 'L' || roman[i+1] == 'C'))
            {
                integer -= 10;
            }
            else
            {
                integer += 10;
            }
        }
        else if (roman[i] == 'V')
        {
            integer += 5;
        }
        else if (roman[i] == 'I')
        {
            if (i < n - 1 && (roman[i+1] == 'V' || roman[i+1] == 'X'))
            {
                integer -= 1;
            }
            else
            {
                integer += 1;
            }
        }
    }

    return integer;
}

int main ()
{
    string roman = {"MCMXCIV"};
    
    cout << endl << romanToInt(roman) << endl;
    
    return 0;
}
