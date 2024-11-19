// Algorithm 1
// Start a loop from end, and break it when the index is a space
// Store the index in a variable i.e. startPoint
// Start another loop from startPoint and break it until its a space
// Store the count of iterations in a variable and return it i.e. wordLength

// Algorithm 2
// Start the loop from end, and if its not a space, increase the wordLength
// And if the loop encounters a space again, and wordLength is greater than 0, loop breaks
// Return the wordLength

#include <iostream>
#include <string>
using namespace std;

int lengthOfLastWord(string text, int size)
{
    int wordLength = 0;
    int startPoint = 0;
    
    for(int i = size-1; i>=0; i--)
    {
        if(text[i] != ' ')
        {
            startPoint = i;
            break;
        }
    }
    
    for(int i = startPoint; i>=0; i--)
    {
        if(text[i] == ' ')
        {
            break;
        }
        wordLength++;
    }
    
    return wordLength;
}

int lengthOfLastWord2(string text, int size)
{
    int wordLength = 0;
    
    for(int i = size - 1; i >= 0; i--)
    {
        if (text[i] != ' ')
        {
            wordLength++;
        }
        else if (wordLength > 0)
        {
            break;
        }
    }
    return wordLength;
}

int main ()
{
    string text = "luffy is still joyboy";
    int size = text.length();
    
    cout << endl;
    cout << "Length of last word : " << lengthOfLastWord(text, size) << endl;
    cout << "Length of last word : " << lengthOfLastWord2(text, size) << endl;
    
    // Same time [O(n)] and space [O(1)] complexities, but 2nd one handle all cases
    
    return 0;
}

