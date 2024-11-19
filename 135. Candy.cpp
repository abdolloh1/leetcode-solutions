// Algorithm
// A max function to find max
// Create an array for candies for each child
// Add one candy for each child
// If a child has more rating than his previous one, his candies = previous child's candies + 1
// If a child has more rating than his next one, compare his candies with 1+ his next one's
// and his candies = the max one
// Add all candies into a variable and return it

#include <iostream>
using namespace std;

int findMax(int a, int b)
{
    if(a>b)
    {
        return a;
    }
    else
    {
        return b;
    }
}

int candy(int ratings[], int size)
{
    int candies[size];
    for (int i = 0; i < size; i++)
    {
        candies[i] = 1;
    }

    for (int i = 1; i < size; i++)
    {
        if (ratings[i] > ratings[i - 1])
        {
            candies[i] = candies[i - 1] + 1;
        }
    }

    for (int i = size - 2; i >= 0; i--)
    {
        if (ratings[i] > ratings[i + 1])
        {
            candies[i] = findMax(candies[i], candies[i + 1] + 1);
        }
    }

    int minimumCandies = 0;
    for (int i = 0; i < size; i++)
    {
        minimumCandies += candies[i];
    }

    return minimumCandies;
}

int main ()
{
    const int size = 3;
    int array[size] = {2,1,4};
    
    cout << candy(array, size) << " candies" << endl;
}
