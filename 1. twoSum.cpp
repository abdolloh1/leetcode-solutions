//Algorithm
// A nested loop, where i is first element, and j starts with the next of i
// Compare the sum of both elements to target
// If its equal, store the indecies in different variables and break
// For outer loop, if values of variables are assigned, break
// If values of variables is are not assigned and loops break, No solution
// Else, Print both variables

#include <iostream>
using namespace std;

void twoSum(int array[], int size, int target)
{
    int x = -1;
    int y = -1;

    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (array[i] + array[j] == target)
            {
                x = i;
                y = j;
                break;
            }
        }
        if (x != -1)
        {
            break;
        }
    }

    if (x != -1 && y != -1) {
        cout << "[" << x << ", " << y << "]" << endl;
    } else {
        cout << "No two sum solution found" << endl;
    }
}

int main() {
    const int size = 4;
    int array[size] = {2, 7, 11, 15};
    int target = 26;

    twoSum(array, size, target);

    return 0;
}
