#include <iostream>
using namespace std;

int gcd(int a, int b)
{
    while(b != 0)
    {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

string gcdOfStrings(string word1, string word2, int size1, int size2)
{
    if (word1 + word2 != word2 + word1)
    {
        return "";
    }
    
    int gcdLength = gcd(size1, size2);
    return word1.substr(0, gcdLength);
}


int main ()
{
    string word1 = "ABCABC";
    string word2 = "ABC";
    int size1 = word1.size();
    int size2 = word2.size();
    
    cout << gcdOfStrings(word1, word2, size1, size2) << endl <<endl;
    return 0;
}
