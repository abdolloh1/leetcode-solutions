#include <iostream>
using namespace std;

bool isPalindrome(int x)
{
    if (x < 0 || (x % 10 == 0 && x != 0))
    {
        return false;
    }

    int reversed = 0;
    int original = x;
    
    while (x > 0)
    {
        int digit = x % 10;
        reversed = reversed * 10 + digit;
        x /= 10;
    }
    
    if(original == reversed)
    {
        return true;
    }
    
    return false;
}

bool isPalindrome2(int x) // More Efficient
{
    if (x < 0 || (x % 10 == 0 && x != 0))
    {
        return false;
    }

    int reversed = 0;
    while (x > reversed)
    {
        int digit = x % 10;
        reversed = reversed * 10 + digit;
        x /= 10;
    }
    
    if(x == reversed || x == reversed/10)
    {
        return true;
    }
    
    return false;
}


int main ()
{
    int x = 121;
    cout << isPalindrome(x);
    cout << isPalindrome2(x);
    
    return 0;
}
