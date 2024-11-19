#include <iostream>
using namespace std;

bool isSubsequence(string first, string second)
{
    int count = 0;
    
    if(first.length() == 0)
    {
        return true;
    }
    
    for (int finder = 0; finder < second.size(); finder++)
    {
        if (count < first.length() && second[finder] == first[count])
        {
            count++;
        }

        if (count == first.length()) {
            return true;
        }
    }
    
    return false;
}

int main ()
{
    string one = "axc";
    string two = "ahbgdc";
    
    cout << isSubsequence(one, two) << endl << endl;
    
    return 0;
}
