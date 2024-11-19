#include <iostream>
using namespace std;

string convert(string s, int numRows)
{
    if (numRows == 1)
    {
        return s;
    }

    string result = "";
    int size = s.length();
    int cycleLen = 2 * numRows - 2;

    for (int i = 0; i < numRows; i++)
    {
        for (int j = i; j < size; j += cycleLen)
        {
            result += s[j];
            if (i != 0 && i != numRows - 1 && j + cycleLen - 2 * i < size)
            {
                result += s[j + cycleLen - 2 * i];
            }
        }
    }
    return result;
}

int main ()
{
    string s = "PAYPALISHIRING";
    
    int numRows = 4;
    
    cout << convert(s, numRows) << endl << endl;
    
    return 0;
}
