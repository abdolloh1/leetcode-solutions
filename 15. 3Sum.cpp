#include <iostream>
using namespace std;

void threeSum(int array[], int size)
{
    for (int i = 0; i < size - 2; i++)
    {
        for (int j = i + 1; j < size - 1; j++)
        {
            for (int k = j + 1; k < size; k++)
            {
                if (array[i] + array[j] + array[k] == 0)
                {
                    cout << array[i] << " " << array[j] << " " << array[k] << endl;
                }
            }
        }
    }
}

void bubbleSort(int arr[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void threeSum2(int nums[], int size)
{
    bubbleSort(nums, size);
    int tripletResults[100][3];
    int tripletCount = 0;
    
    for (int i = 0; i < size - 2; i++)
    {
        if (i > 0 && nums[i] == nums[i - 1])
        {
            continue;
        }
        
        int left = i + 1;
        int right = size - 1;

        while (left < right)
        {
            int sum = nums[i] + nums[left] + nums[right];

            if (sum == 0)
            {
                tripletResults[tripletCount][0] = nums[i];
                tripletResults[tripletCount][1] = nums[left];
                tripletResults[tripletCount][2] = nums[right];
                tripletCount++;

                while (left < right && nums[left] == nums[left + 1])
                {
                    left++;
                }
                
                while (left < right && nums[right] == nums[right - 1])
                {
                    right--;
                }
                left++;
                right--;
            }
            
            else if (sum < 0)
            {
                left++;
            }
            
            else
            {
                right--;
            }
        }
    }

    for (int i = 0; i < tripletCount; i++)
    {
        cout << tripletResults[i][0] << " " << tripletResults[i][1] << " " << tripletResults[i][2] << endl;
    }
}


int main ()
{
    const int size = 6;
    int nums[size] = {-1,0,1,2,-1,-4};
    
    threeSum(nums, size); // Brute Force
    cout << endl << endl;
    threeSum2(nums, size); // Two Pointers
    
    
    return 0;
}
