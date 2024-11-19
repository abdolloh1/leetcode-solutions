#include <iostream>
using namespace std;

int getProduct(int array[], int size, int i, int product)
{
    for(int j = 0; j<size; j++)
    {
        if(i!=j)
        {
            product = product * array[j];
        }
    }
    return product;
}

void displayArray(int *array, int size)
{
    cout << endl;
    for(int i = 0; i<size; i++)
    {
        cout << " " << array[i];
    }
    cout << endl << endl;
}

void productExceptSelf(int array[], int size)
{
    int *productArray = new int[size];
    int product = 1;
    for(int i = 0; i<size; i++)
    {
        product = 1;
        productArray[i] = getProduct(array, size, i, product);
    }
    
    displayArray(productArray, size);
    delete [] productArray;
}

void productExceptSelf2(int array[], int size)
{
    int* productArray = new int [size];
    int* leftOfArray = new int [size];
    int*rightOfArray = new int [size];
    
    leftOfArray[0] = 1;
    rightOfArray[size - 1] = 1;
    
    for(int i = 1; i<size; i++)
    {
        leftOfArray[i] = leftOfArray[i-1] * array[i-1];
    }
    
    for(int i = size-2; i>=0; i--)
    {
        rightOfArray[i] = rightOfArray[i+1] * array[i+1];
    }
    
    for(int i = 0; i<size; i++)
    {
        productArray[i] = leftOfArray[i] * rightOfArray[i];
    }
    
    displayArray(productArray, size);
    
    delete[] productArray;
    delete[] leftOfArray;
    delete[] rightOfArray;
}

int main ()
{
    const int size = 4;
    int array[size] = {1,2,3,4};
    
    productExceptSelf(array, size); // Time complexity : O(n^2)
    productExceptSelf2(array, size); // Time complexity : O(n) Space : O(1)
    
    
    return 0;
}
