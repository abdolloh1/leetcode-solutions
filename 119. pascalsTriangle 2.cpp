#include<iostream>
using namespace std;

int *generateTriangle(int rowIndex)
{
    int numRows = 10;
    int triangle[numRows][numRows];
    int layer;
    
    for(layer = 0; layer < numRows; layer++)
    {
        triangle[layer][0] = 1;
        triangle[layer][layer] = 1;
        
        for (int i = 1; i < layer; i++)
        {
            triangle[layer][i] = triangle[layer - 1][i - 1] + triangle[layer - 1][i];
        }
    }
    
    int* rowIndexResult = new int[rowIndex + 1];
    for (int i = 0; i <= rowIndex; i++)
    {
        rowIndexResult[i] = triangle[rowIndex][i];
    }
    
    return rowIndexResult;
}
int main ()
{
    int rowIndex =4;
    int*result = generateTriangle(rowIndex);
    
    for (int i = 0; i <= rowIndex; i++)
    {
        cout << result[i] << " ";
    }
    cout << endl;
    
    delete[] result;
    return 0;
}
