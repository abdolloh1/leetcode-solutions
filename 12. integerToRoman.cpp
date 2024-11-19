// Algorithm
// Use while loops for 1000s, 10s, and 1s
// If number is greater than any of them, keep adding their roman in string and substracting their value
// Use If statements for others and do the same
// Store all those romans in a string and return it

#include <iostream>
using namespace std;

string intToRoman(int number)
{
    string roman = "";
    
    while (number >= 1000)
    {
        roman += "M";
        number -=1000;
    }
    
    if(number >= 900)
    {
        roman += "CM";
        number-=900;
    }
    
    if (number >= 500)
    {
        roman += "D";
        number -= 500;
    }
    
    if (number >= 400)
    {
        roman += "CD";
        number -= 400;
    }
    
    while (number >= 100)
    {
        roman += "C";
        number -= 100;
    }
    
    if (number >= 90)
    {
        roman += "XC";
        number -= 90;
    }
    
    if (number >= 50)
    {
        roman += "L";
        number -= 50;
    }
    
    if (number >= 40)
    {
        roman += "XL";
        number -= 40;
    }
    
    while (number >= 10)
    {
        roman += "X";
        number -= 10;
    }
    
    if (number >= 9)
    {
        roman += "IX";
        number -= 9;
    }
    
    if (number >= 5)
    {
        roman += "V";
        number -= 5;
    }
    
    if (number >= 4)
    {
        roman += "IV";
        number -= 4;
    }
    
    while (number >= 1)
    {
        roman += "I";
        number -= 1;
    }
    
    return roman;
}

int main ()
{
    int number = 3749;
    
    cout << intToRoman(number) << endl << endl;
    
    return 0;
}
