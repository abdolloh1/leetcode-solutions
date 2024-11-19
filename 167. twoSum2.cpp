// Algorithm

#include <iostream>
using namespace std;

int* twoSum(int numbers[], int size, int target)
{
    int* answer = new int[2];
    
    int first = 0;
    int second = size - 1;

    while (first < second)
    {
        int sum = numbers[first] + numbers[second];
        if (sum == target)
        {
            answer[0] = first + 1;
            answer[1] = second + 1;
            return answer;
        }
        else if (sum < target)
        {
            first++;
        }
        else
        {
            second--;
        }
    }
    
    return answer;
}

int main ()
{
    const int size = 4;
    int array[size+1] = {2,7,11,15};
    int target = 9;
    
    int *answer = twoSum(array, size, target);
    
    cout << "Indices: " << answer[0] << ", " << answer[1] << endl;
    
    delete[] answer;
    return 0;
}
