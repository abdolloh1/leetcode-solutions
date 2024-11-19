#include <iostream>
using namespace std;

int countBinarySubstrings(string s)
{
    int groupSize1 = 0;
    int groupSize2 = 1;
    
    int count = 0;
    int size = s.length();
    
    for(int i = 1; i<size; i++)
    {
        if(s[i] == s[i-1])
        {
            groupSize2++;
        }
        else
        {
            count = count + min(groupSize1, groupSize2);
            
            groupSize1 = groupSize2;
            groupSize2 = 1;
        }
    }
    
    count = count + min(groupSize1, groupSize2);
    return count;
}

int main ()
{
    string s = "00110011";
    
    cout << countBinarySubstrings(s) << endl;
    
    return 0;
}
