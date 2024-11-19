// Algorithm
// Make two counters, one for open brackets and one for close ones
// If you find a '(', increase open by one
// If you find a ')', decrease open by one
// If you havent found an open bracket, increase close by one
// Return open + close

#include <iostream>
using namespace std;

int minAddToMakeValid(string s)
{
    int open = 0;
    int close = 0;
    
    for(int i = 0; i<s.length(); i++)
    {
        if(s[i] == '(')
        {
            open++;
        }
        if(s[i] == ')')
        {
            if(open > 0)
            {
                open--;
            }
            else
            {
                close++;
            }
        }
    }
    
    return open+close;
}

int main ()
{
    string s = "())";
    cout << minAddToMakeValid(s) << endl;
    
    s = "(((";
    cout << minAddToMakeValid(s) << endl;
    
    return 0;
}
