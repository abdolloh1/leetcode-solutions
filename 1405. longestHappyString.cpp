#include <iostream>
using namespace std;

string longestDiverseString(int a, int b, int c)
{
    string result = "";

    while (a > 0 || b > 0 || c > 0)
    {
        if (result.size() >= 2 && result[result.size() - 1] == result[result.size() - 2])
        {
            if (result[result.size() - 1] == 'a')
            {
                if (b > 0) {
                    result += 'b';
                    b--;
                } else if (c > 0) {
                    result += 'c';
                    c--;
                } else {
                    break;
                }
            } else if (result[result.size() - 1] == 'b')
            {
                if (a > 0)
                {
                    result += 'a';
                    a--;
                }
                else if (c > 0)
                {
                    result += 'c';
                    c--;
                }
                else
                {
                    break;
                }
            }
            else
            {
                if (a > 0) {
                    result += 'a';
                    a--;
                } else if (b > 0) {
                    result += 'b';
                    b--;
                } else {
                    break;
                }
            }
        } else {
            if (a >= b && a >= c) {
                result += 'a';
                a--;
            } else if (b >= c) {
                result += 'b';
                b--;
            } else {
                result += 'c';
                c--;
            }
        }
    }

    return result;
}

int main() {
    int a, b, c;
    cout << "Enter the counts for a, b, and c: ";
    cin >> a >> b >> c;

    string result = generateHappyString(a, b, c);
    cout << "Longest happy string: " << result << endl;

    return 0;
}
