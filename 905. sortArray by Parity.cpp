#include <iostream>
using namespace std;

void sortArrayByParity(int array[], int size)
{
    int left = 0;
    int right = size - 1;
    
    while(left <= right)
    {
        if(array[left] % 2 != 0 && array[right] % 2 == 0)
        {
            swap(array[left], array[right]);
        }
        else if (array[left] % 2 == 0)
        {
            left++;
        }
        else
        {
            right--;
        }
    }
}

int main ()
{
    const int size = 4;
    int array[size] = {3,1,2,4};
    
    sortArrayByParity(array, size);
    
    for(int i = 0; i<size; i++)
    {
        cout << array[i] << " ";
    }
    
    cout << endl;
    
    return 0;
}
