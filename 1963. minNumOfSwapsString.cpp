#include <iostream>
using namespace std;

int minSwaps(string s)
{
    int swapCount = 0;
    int openNeeded = 0;
    
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '[')
        {
            openNeeded++;
        }
        else
        {
            if (openNeeded > 0)
            {
                openNeeded--;
            }
            else
            {
                swapCount++;
                openNeeded++;
            }
        }
    }
    return swapCount;
}

int main ()
{
    string brackets = "][][";
    cout << "[" << brackets << "] Number of swaps : " << minSwaps(brackets) << endl;
    
    brackets = "]]][[[";
    cout << "[" << brackets << "] Number of swaps : " << minSwaps(brackets) << endl;
    
    brackets = "[]";
    cout << "[" << brackets << "] Number of swaps : " << minSwaps(brackets) << endl;
    
    return 0;
}
