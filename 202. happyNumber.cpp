// Algorithm
// Break the number and get the sum squares
// Break it by taking mod of 10 and add its square to the sum
// Divide the number by 10 to remove it
// Make two pointers
// Move slow pointer at one time
// Move fast pointer at two times, it gets sum of squares of sum of number
// If slow = fast, it is one, return it

#include <iostream>
using namespace std;

int sumOfSquares(int number)
{
    int sum = 0;
    while (number > 0)
    {
        int digit = number % 10;
        sum = sum + digit * digit;
        number = number / 10;
    }
    return sum;
}

bool isHappy(int n)
{
    int slow = n;
    int fast = n;
    
    do
    {
        slow = sumOfSquares(slow);
        fast = sumOfSquares(sumOfSquares(fast));
    } while (slow != fast);
    
    return slow==1;
}

int main ()
{
    int n = 2;
    cout << isHappy(n) << endl;

    return 0;
    
}
