// Algorithm
// First clean the string
// Check for alpha numerics and convert uppercases to lowercases
// Check for empty string and if yes, return true
// Use 2 pointers, left and right
// Compare the characeters ar left and right pointers
// If they are not same, return false
// Keep moving left pointer to right and right one to the left
// Return true when the loop ends

#include <iostream>
using namespace std;

string stringCleaner(string s)
{
    string cleanedS = "";
    
    for (int i = 0; i < s.length(); i++)
    {
        char c = s[i];
        if (isalnum(c))
        {
            cleanedS += tolower(c);
        }
    }
    
    return cleanedS;
}

bool isPalindrome (string s)
{
    s = stringCleaner(s);
    
    if (s.length() == 0)
    {
        return true;
    }
    
    int left = 0;
    int right = s.length() - 1;
    
    while(left<=right)
    {
        if(left != right)
        {
            return false;
        }
        left++;
        right--;
    }
    return true;
}

int main ()
{
    string s = " ";
    cout << "String:" << s << " Is it Palindrome? " << isPalindrome(s) << endl;
    
    s = "A man, a plan, a canal: Panama";
    cout << "String:" << s << " Is it Palindrome? " << isPalindrome(s) << endl;
    
    s = " ";
    cout << "String:" << s << " Is it Palindrome? " << isPalindrome(s) << endl;
    
    return 0;
}
