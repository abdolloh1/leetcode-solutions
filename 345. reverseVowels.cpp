// Algorithm
// Start a loop and collect all vowels in a string
// Start a loop again, and replace all the vowels
// Replace the vowels but in reverse way
// Return the same string


#include <iostream>
using namespace std;

string reverseVowels(string s)
{
    string vowels = "";
    for(int i = 0; i<s.length(); i++)
    {
        if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' ||
           s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U')
        {
            vowels += s[i];
        }
    }
    
    int vowelSize = vowels.length();
    int j = vowelSize - 1;
    
    for(int i = 0; i<s.length(); i++)
    {
        if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' ||
           s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U')
        {
            s[i] = vowels[j];
            j--;
        }
    }
    return s;
}

int main ()
{
    string s = "leetcode";
    
    
    cout << "String : " << s << endl << endl;
    
    s = reverseVowels(s);
    
    cout << "Vowels reversed..." << endl;
    cout << "String : " << s << endl << endl;
    
    return 0;
}
