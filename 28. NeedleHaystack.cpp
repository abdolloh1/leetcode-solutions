#include <iostream>
#include <string>
using namespace std;

int findFirstOcc(string haystack, string needle, int nSize, int hSize)
{
    for(int i = 0; i<= hSize - nSize; i++)
    {
        int j;
        if(haystack[i] == needle[0])
        {
            for(j = 0; j<nSize; j++)
            {
                if(haystack[j+i] != needle[j])
                {
                    break;
                }
            }
            
            if(j == nSize)
            {
                return i;
            }
        }
    }
    return -1;
}

int main()
{
    string needle = "leeto";
    string haystack =  "leetcode";
    int nSize = needle.size();
    int hSize = haystack.size();
    
    cout << "Index : " << findFirstOcc(haystack, needle, nSize, hSize);
    
    cout << endl << endl;
}
