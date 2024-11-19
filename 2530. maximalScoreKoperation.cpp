#include <iostream>
#include <queue>

using namespace std;

int maxKelements(int array[], int size, int k)
{
    int score = 0;
    priority_queue<int> maxHeap;
    
    for(int i = 0; i<size; i++)
    {
        maxHeap.push(array[i]);
    }
        
    for(int i = 0; i<k; i++)
    {
        int largest = maxHeap.top();
        maxHeap.pop();
        
        score = score + largest;
        
        int newVal = ceil(largest / 3.0);
        maxHeap.push(newVal);
    }
    
    return score;
}

int main ()
{
    const int size = 5;
    int array[size] = {1,10,3,3,3};
    int k = 3;
    
    cout << maxKelements(array, size, k) << endl;
    
    return 0;
}
