#include <iostream>
#include <unordered_map>
using namespace std;

string originalDigits(string originalString)
{
    unordered_map <char, int> count;
    int digits[10] = {0};
    
    for (int i = 0; i < originalString.length(); i++)
    {
        count[originalString[i]]++;
    }
    
    digits[0] = count['z'];
    digits[2] = count['w'];
    digits[4] = count['u'];
    digits[6] = count['x'];
    digits[8] = count['g'];
    
    digits[1] = count['o'] - digits[0] - digits[2] - digits[4];
    digits[3] = count['t'] - digits[2] - digits[8];
    digits[5] = count['f'] - digits[4];
    digits[7] = count['s'] - digits[6];
    digits[9] = count['i'] - digits[5] - digits[6] - digits[8];
    
    string resultString;
    for (int i = 0; i < 10; ++i)
    {
        resultString += string(digits[i], '0' + i);
    }
    
    return resultString;
}

int main ()
{
    string s = "owoztneoer";
    cout << originalDigits(s) << endl;
    
    return 0;
}
