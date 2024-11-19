#include <iostream>
using namespace std;

char findKthBit(int n, int k)
{
    if (n == 1)
    {
        return '0';
    }
    
    int length = (1 << n) - 1;
    int mid = length / 2 + 1;
    
    if (k == mid)
    {
        return '1';
    }
    else if (k < mid)
    {
        return findKthBit(n - 1, k);
    }
    else
    {
        int mirroredIndex = length - k + 1;
        char mirroredBit = findKthBit(n - 1, mirroredIndex);
        return mirroredBit == '0' ? '1' : '0';
    }
}

int main ()
{
    int n = 4;
    int k = 11;
    
    cout << findKthBit(n, k) << endl;
    
    return 0;
}
