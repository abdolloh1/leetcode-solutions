#include <iostream>
using namespace std;

int minimumSteps(string s)
{
    int size = s.length();
    int totalBlackBalls = 0;

    for (int i = 0; i<size; i++)
    {
        if (s[i] == '1')
        {
            totalBlackBalls++;
        }
    }

    if (totalBlackBalls == 0 || totalBlackBalls == size)
    {
        return 0;
    }

    int swaps = 0;
    int blackBallCount = 0;

    for (int i = 0; i<size; i++)
    {
        if (s[i] == '1')
        {
            blackBallCount++;
        }
        else
        {
            swaps += blackBallCount;
        }
    }

    return swaps;
}

int main()
{
    cout << minimumSteps("100") << endl;  // Expected output: 2
    cout << minimumSteps("101") << endl;  // Expected output: 1
    cout << minimumSteps("0111") << endl; // Expected output: 0
    cout << minimumSteps("0000") << endl; // Expected output: 0
    cout << minimumSteps("1111") << endl; // Expected output: 0
    
    return 0;
}
