#include <iostream>
using namespace std;

int* plusOne(int *digits, int size)
{
    int number = 0;
    int position = 1;
    
    for(int i = size-1; i>=0; i--)
    {
        number += digits[i]*position;
        position *= 10;
    }
    
    number++;
    
    position = size-1;
    while (position > 0)
    {
        digits[position] = number % 10;
        number /= 10;
        position--;
    }
    
    return digits;
}

void display(int *digits, int size)
{
    cout << "[";
    for(int i = 0; i<size; i++)
    {
        cout << digits[i] << ", ";
    }
    cout<< "]";
    cout << endl;
}

int main ()
{
    const int size = 3;
    int digits[size] = {1,2,3};
    
    plusOne(digits, size);
    display(digits, size);
    
    return 0;
}
