#include <iostream>
using namespace std;

void generateTriangle(int numRows)
{
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
    
    for (int layer = 0; layer < numRows; layer++)
    {
        for (int i = 0; i <= layer; i++)
        {
            cout << triangle[layer][i] << " ";
        }
        cout << endl;
    }
}

int main ()
{
    int numRows = 5;
    generateTriangle(numRows);
    
    return 0;
}



