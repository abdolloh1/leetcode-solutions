// Algorithm
// Make two pointers, start and end
// Make one counter
// A loop to increase end
// At every increase of end, a loop to check is it has duplicate
// If it has duplicate, make start == duplicate element + 1
// At end compare the length with end-start+1
// return the length

#include <iostream>
using namespace std;

int lengthOfLongestSubstring(string s)
{
    int start = 0;
    int end = 0;
    int length = 0;
    int checker = 0;
    
    for(end = 0; end < s.length(); end++)
    {
        bool hasDuplicate = false;
        
        for(int checker = start; checker<end; checker++)
        {
            if(s[checker] == s[end])
            {
                start = checker+1;
            }
        }
        if(!hasDuplicate)
        {
            length = max(length, end-start+1);
        }
    }
    return length;
}

int main ()
{
    string s = "abcabcbb";
    cout << "String : " << s << ", Length of longest substring : " << lengthOfLongestSubstring(s) << endl;
    
    s = "bbbbb";
    cout << "String : " << s << ", Length of longest substring : " << lengthOfLongestSubstring(s) << endl;
    
    s = "pwwkew";
    cout << "String : " << s << ", Length of longest substring : " << lengthOfLongestSubstring(s) << endl;
    
    return 0;
}

