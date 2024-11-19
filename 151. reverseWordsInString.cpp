#include <iostream>
#include <string>

using namespace std;

string reverseWords(string text)
{
    string result;
    string word;
    int size = text.size();

    for (int i = 0; i < size; i++)
    {
        if (text[i] != ' ')
        {
            word += text[i];
        }
        else if (!word.empty())
        {
            if (!result.empty())
            {
                result = word + ' ' + result;
            }
            else
            {
                result = word;
            }
            word.clear();
        }
    }

    if (!word.empty())
    {
        if (!result.empty()) {
            result = word + ' ' + result;
        }
        else
        {
            result = word;
        }
    }

    return result;
}

int main ()
{
    string text = "The sky is blue";
    
    cout << reverseWords(text) << endl;
    
    return 0;
}
