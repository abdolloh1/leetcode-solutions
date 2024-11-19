// Algorithm
// Take a new string to store as final result
// Create a loop, make condition of loop to max(size1, size2)
// If index hasnt reached size, append its ith character in final string
// Do it again for 2nd string
// Return the final string

#include <iostream>
using namespace std;

string mergeAlternately(string word1, string word2, int size1, int size2)
{
    string finalWord = "";
    for(int i = 0; i<max(size1, size2); i++)
    {
        if(i < size1)
        {
            finalWord += word1[i];
        }
        if(i < size2)
        {
            finalWord += word2[i];
        }
    }
    return finalWord;
}

int main ()
{
    
    string word1 = "ab";
    string word2 = "pqrs";
    int size1 = word1.length();
    int size2 = word2.length();
    
    cout << mergeAlternately(word1, word2, size1, size2) << endl << endl;
}
