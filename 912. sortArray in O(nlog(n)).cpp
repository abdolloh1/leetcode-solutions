#include <iostream>
using namespace std;

void merge(int arr[], int left, int mid, int right)
{
    int sizeLeft = mid - left + 1;
    int sizeRight = right - mid;
    
    int leftArr[sizeLeft];
    int rightArr[sizeRight];
    
    for (int i = 0; i < sizeLeft; i++)
    {
        leftArr[i] = arr[left + i];
    }
    
    for (int j = 0; j < sizeRight; j++)
    {
        rightArr[j] = arr[mid + 1 + j];
    }
    
    int i = 0, j = 0, k = left;
    while (i < sizeLeft && j < sizeRight)
    {
        if (leftArr[i] <= rightArr[j])
        {
            arr[k] = leftArr[i];
            i++;
        } else {
            arr[k] = rightArr[j];
            j++;
        }
        k++;
    }
    
    while (i < sizeLeft)
    {
        arr[k] = leftArr[i];
        i++;
        k++;
    }
    
    while (j < sizeRight)
    {
        arr[k] = rightArr[j];
        j++;
        k++;
    }
}

void mergeSort(int arr[], int left, int right)
{
    if (left >= right) return;
    
    int mid = left + (right - left) / 2;
    mergeSort(arr, left, mid);
    mergeSort(arr, mid + 1, right);
    merge(arr, left, mid, right);
}

int main() {
    const int size = 10;
    int arr[size] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    
    mergeSort(arr, 0, size - 1);
    
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    return 0;
}
