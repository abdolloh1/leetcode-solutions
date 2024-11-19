#include <iostream>
using namespace std;

int singleNumber(int array[], int size)
{
    int result = 0;

    for (int i = 0; i < size; i++)
    {
        result ^= array[i];
    }
    
    return result;
}

int main ()
{
    int array[3] = {2,2,1};
    cout << singleNumber(array, 3) << endl;
    
    return 0;
}

