#include <iostream>
using namespace std;

void mergeArrays(int array1[], int array2[], int size1, int size2, int mergedArray[])
{
    int i = 0, j = 0, k = 0;
    while (i < size1 && j < size2)
    {
        if (array1[i] < array2[j])
        {
            mergedArray[k++] = array1[i++];
        }
        
        else
        {
            mergedArray[k++] = array2[j++];
        }
    }

    while (i < size1)
    {
        mergedArray[k++] = array1[i++];
    }

    while (j < size2)
    {
        mergedArray[k++] = array2[j++];
    }
}

double findMedianSortedArrays(int array1[], int array2[], int size1, int size2)
{
    double median = 0.00;
    int totalSize = size1+size2;
    
    int mergedArray[totalSize];
    mergeArrays(array1, array2, size1, size2, mergedArray);
    
    if(totalSize % 2 == 0)
    {
        median = (mergedArray[totalSize / 2 - 1] + mergedArray[totalSize / 2]) / 2.0;
    }
    else
    {
        median = mergedArray[totalSize / 2];
    }
    
    return median;
}

int main ()
{
    const int size1 = 2;
    const int size2 = 1;
    int array1[size1] = {1,3};
    int array2[size2] = {2};
    
    cout << "Median = " << findMedianSortedArrays(array1, array2, size1, size2) << endl;
    
    return 0;
}
