#include <iostream>
using namespace std;

int maxWidthRamp(int array[], int size)
{
    int maxRamp = 0;
    for(int i = 0; i<size; i++)
    {
        for(int j = i+1; j<size; j++)
        {
            if(array[i] <= array[j])
            {
                maxRamp = max(maxRamp, j-1);
            }
        }
    }
    return maxRamp;
}

int main ()
{
    const int size = 6;
    int array[size] = {6,0,8,2,1,5};
    
    cout << maxWidthRamp(array, size) << endl;
    
    return 0;
}
